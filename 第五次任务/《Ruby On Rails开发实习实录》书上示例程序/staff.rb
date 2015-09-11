#encoding: gbk

require "dbi"

begin 
	dbh=DBI.connect("dbi:Mysql:db_oa:localhost","root","")

	rows_num=dbh.do("
		insert into
		staffs(`name`, `sex`, `age`, `politics_status`, `IDNO`, `birthdate`, `email`, `mobile`, `native_place`, `blood_type`, `nation`, `work_unit`, `school`)
		values(?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)",
		"李小贝", "女", 25,
		"预备党员",
		"410184198506158388", "1985-06-15",
		"lixiaobei123456@163.com", "18888888888", "郑州",
		"O", "汉",
		"河南省天一二三有限公司",
		"北京大学")
	
	puts "您向数据库插入了 #{rows_num} 条数据"
rescue Mysql::Error => e
	puts "Error Number: #{e.errno}"
	puts "Error Message: #{e.error}"
	puts "Error State: #{e.sqlstate}" if e.respond_to?("sqlstate")
ensure
	dbh.disconnect if dbh
end


=begin

create table staffs
(
  `id` int unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(50) NOT NULL,
  `sex` varchar(2),
  `age` int,
  `politics_status` varchar(10),
  `IDNO` varchar(18),
  `birthdate` date,
  `email` varchar(50),
  `mobile` varchar(15),
  `native_place` varchar(15),
  `blood_type` varchar(2),
  `nation` varchar(10),
  `work_unit` varchar(50),
  `school` varchar(50),
  PRIMARY KEY (`id`)
)
=end

