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
values('李意', 4700000), ('刘静', 6987000),
('张静思', 10020000),
('田丽丽', 2300000),
('李小贝', 8633000),
('张浩华', 5020000),
('李华', 7600000),
('赵铎', 360000)
")


dbh.do("delete from achievements")



=end
