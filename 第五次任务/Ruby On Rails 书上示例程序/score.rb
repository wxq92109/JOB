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
		puts "ѧ�� #{score.student_name} �ĳɼ���Ϣ�ѱ��������ݿ�"
	end
end


#׼�������ݿ��в��������
peter=Score.new("��ѧ", 83, "Peter", "")
libei=Score.new("��ѧ", 100, "�", "")
liubuyi=Score.new("��ѧ", 58, "����һ", "��Ϊ�ٵ�����û����")

begin
	# �������ݿ����Ӷ��󲢴����ݿ�����
	dbh = Mysql.real_connect("localhost", "root", "", "db_student")

	#�����ݿ��б�������ѧ���ĳɼ�
	saveScore(dbh, peter)
	saveScore(dbh, libei)
	saveScore(dbh, liubuyi)

	#��Ϊ�ľ���ʦ���󣬸Ĵ�Peterͬѧ��һ���⣬���ｫPeter�ĳɼ��޸�һ��
	sql="update scores set score=#{ 86 } where student_name='#{"Peter"}'"
	dbh.query(sql)
	if(dbh.affected_rows==1) 
		puts "ѧ�� #{"Peter"} �ĳɼ��޸ĳɹ�"
	end

	#���������ͬѧ���ף�����ѧ���ɼ����ϣ�������������Ҫ���ͬѧ�ɼ�ɾ��
	sql="delete from scores where student_name='#{"�"}'"
	dbh.query(sql)
	if(dbh.affected_rows==1) 
		puts "ѧ�� #{"�"} �ĳɼ�ɾ���ɹ�"
	end
rescue Mysql::Error => e
	puts "Error Number: #{e.errno}"
	puts "Error Message: #{e.error}"
	puts "Error State: #{e.sqlstate}" if e.respond_to?("sqlstate")
ensure
	dbh.close	
end
