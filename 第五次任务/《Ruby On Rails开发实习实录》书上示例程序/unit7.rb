#encoding: gbk


require "mysql"

dbh=Mysql.real_connect("localhost", "root", "", "test", 3306)
print "�������Ʒ���ƣ�"
name=gets.chomp
print "�������Ʒ�۸�"
price=gets.chomp
print "�������Ʒ�ͺţ�"
model=gets.chomp
print "�������Ʒ˵����"
details=gets.chomp

dbh.query("
insert into 
products(`name`, `price`, `model`, `details`)
values('#{name}',#{price},'#{model}','#{details}')
")
puts "�����ݿ��гɹ�������#{dbh.affected_rows}����¼"

dbh.close




=begin
create table products( 
`id` int unsigned NOT NULL AUTO_INCREMENT, 
`name` varchar(50) NOT NULL, 
`price` int, 
`model` varchar(20), 
`details` text, PRIMARY KEY (`id`))
=end
