#encoding: gbk

class Score
	def initialize(id=0, subject, score, student_name, explain)
		@id=id
		@subject=subject
		@score=score
		@student_name=student_name
		@explain=explain
	end
	
	attr_accessor :id, :subject, :score, :student_name, :explain
end

require "mysql"

def createSQL(score)
	"insert into scores(subject, score, student_name, `explain`) "+
	"values('#{score.subject}', #{score.score}, '#{score.student_name}', '#{score.explain}')"
end

def saveScore(dbh, score)
	sql=createSQL(score)
	dbh.query(sql)
	if(dbh.affected_rows==1) 
		puts "学生 #{score.student_name} 的成绩信息已被加入数据库"
	end
end


#准备向数据库中插入的数据
peter=Score.new("数学", 83, "Peter", "")
libei=Score.new("数学", 100, "李贝", "")
liubuyi=Score.new("数学", 58, "刘布一", "因为迟到，题没做完")

begin
	# 创建数据库连接对象并打开数据库连接
	dbh = Mysql.real_connect("localhost", "root", "", "db_student")

	#向数据库中保存三个学生的成绩
	saveScore(dbh, peter)
	saveScore(dbh, libei)
	saveScore(dbh, liubuyi)

	#因为改卷老师手误，改错Peter同学的一道题，这里将Peter的成绩修改一下
	sql="update scores set score=#{ 86 } where student_name='#{"Peter"}'"
	dbh.query(sql)
	if(dbh.affected_rows==1) 
		puts "学生 #{"Peter"} 的成绩修改成功"
	end

	#后来发现李贝同学作弊，将该学生成绩做废，所以这里我们要将李贝同学成绩删除
	sql="delete from scores where student_name='#{"李贝"}'"
	dbh.query(sql)
	if(dbh.affected_rows==1) 
		puts "学生 #{"李贝"} 的成绩删除成功"
	end
rescue Mysql::Error => e
	puts "Error Number: #{e.errno}"
	puts "Error Message: #{e.error}"
	puts "Error State: #{e.sqlstate}" if e.respond_to?("sqlstate")
ensure
	dbh.close	
end
