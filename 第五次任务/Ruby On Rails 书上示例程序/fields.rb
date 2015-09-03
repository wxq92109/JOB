#encoding: gbk

require "mysql"

begin
	dbh = Mysql.real_connect("localhost", "root", "", "db_student")
	sql="select * from students"
	res=dbh.query(sql)

	puts "�ֶ���   \t����\tĬ��ֵ\t�ֶγ���\t����\t�������"
	while field=res.fetch_field
		puts "#{field.name}    \t#{field.type}\t#{field.def.nil?? "NULL":field.def}  \t#{field.length}      \t#{field.is_pri_key?}\t#{field.is_not_null?}"	
	end	
rescue Mysql::Error => e
	puts "Error Number: #{e.errno}"
	puts "Error Message: #{e.error}"
	puts "Error State: #{e.sqlstate}" if e.respond_to?("sqlstate")
ensure
	dbh.close	
end