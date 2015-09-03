#encoding: gbk


class Student
	def initialize(name, number, class1, sex=nil, age=nil, details=nil)
		@name=name
		@number=number
		@class1=class1
		@sex=sex
		@age=age
		@details=details
	end
	
	attr_accessor :id, :name, :number, :class1, :sex, :age, :details
end

require "mysql"

peter=Student.new('Peter', 'STU00324', '�����3��' )
libei=Student.new('�', 'STU00353', '����2��', 'Ů', nil, '08��תѧ����')

begin
	dbh = Mysql.real_connect("localhost", "root", "", "db_student")

	sql_peter="insert into students(name, number, class)
	values('#{dbh.escape_string(peter.name)}', '#{dbh.escape_string(peter.number)}', '#{dbh.escape_string(peter.class1)}')"

	sql_libei="insert into students(name, number, class, sex, details)
	values('#{dbh.escape_string(libei.name)}', '#{dbh.escape_string(libei.number)}', '#{dbh.escape_string(libei.class1)}', '#{dbh.escape_string(libei.sex)}', '#{dbh.escape_string(libei.details)}')"

	dbh.query(sql_peter)
	dbh.query(sql_libei)
	
	sql="select * from students"
	res=dbh.query(sql)

	res.each do |row|
		row[4]='��'.dup.force_encoding ( "ASCII-8BIT") if row[4].nil?
		row[5]='20' if row[5].nil?
		row[6]='NULL' if row[6].nil?
		puts "#{row[0]}\t#{row[1]}\t#{row[2]}\t#{row[3]}\t#{row[4]}\t#{row[5]}\t#{row[6]}"
	end
rescue Mysql::Error => e
	puts "Error Number: #{e.errno}"
	puts "Error Message: #{e.error}"
	puts "Error State: #{e.sqlstate}" if e.respond_to?("sqlstate")
ensure
	dbh.close	
end