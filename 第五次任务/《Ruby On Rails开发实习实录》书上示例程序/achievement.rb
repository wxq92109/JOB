#encoding: gbk

require "dbi"
begin
	dbh=DBI.connect("dbi:Mysql:db_oa:localhost","root","")

	sth=dbh.prepare("select name from achievements where saleroom>5000000")
	sth.execute
	while row=sth.fetch_hash
		puts "#{row["name"]} "
	end
rescue Mysql::Error => e
	puts "Error Number: #{e.errno}"
	puts "Error Message: #{e.error}"
	puts "Error State: #{e.sqlstate}" if e.respond_to?("sqlstate")
ensure
	dbh.disconnect if dbh
end

=begin

dbh.do("insert into achievements(`name`, `saleroom`)
values('����', 4700000), ('����', 6987000),
('�ž�˼', 10020000),
('������', 2300000),
('��С��', 8633000),
('�źƻ�', 5020000),
('�', 7600000),
('����', 360000)
")


dbh.do("delete from achievements")



=end
