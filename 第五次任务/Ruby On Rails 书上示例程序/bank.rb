#encoding: gbk

require "dbi"
dbh=DBI.connect("dbi:Mysql:db_bank:localhost","root","")
dbh['AutoCommit']=false

money=800	#ת�˽��
factorage=20	#������
output="6543216598743210"	#ת���˻�
input="6543216965413254"		#ת���˻�

begin
	#��ת���˺��Ͽ۳�ת�˽��
	dbh.do("update cards set money=money-#{money} where card_number='#{output}'")
	#��ת���˺������ת�˽��
	dbh.do("update cards set money=money+#{money} where card_number='#{input}'")
	#��ת���˺��Ͽ۳�������
	dbh.do("update cards set money=money-#{factorage} where card_number='#{output}'")
	dbh.commit
rescue Exception => e
	puts e
	dbh.rollback
end

=begin


=end
