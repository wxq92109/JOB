#encoding: gbk

require "dbi"

begin 
	dbh=DBI.connect("dbi:Mysql:db_log:localhost","root","")
	dbh.do("create table log_02(
	  `id` int unsigned NOT NULL AUTO_INCREMENT,
	  `user` varchar(50),
	  `operate` varchar(250),
	  `record_time` datetime,
	  PRIMARY KEY (`id`)
	)")
	
	rows_num=dbh.do("
		insert into log_02(user,operate,record_time)
		values('admin','�˺� admin ��¼ϵͳ','2010-12-25 12:25:30'),
		('admin','����Ա admin ɾ���û� joker','2010-12-25 12:27:35')
	")
	
	puts "������Ӧ����Ϊ�� #{rows_num}"	
rescue Mysql::Error => e
	puts "Error Number: #{e.errno}"
	puts "Error Message: #{e.error}"
	puts "Error State: #{e.sqlstate}" if e.respond_to?("sqlstate")
ensure
	dbh.disconnect if dbh
end
	

=begin

=end

