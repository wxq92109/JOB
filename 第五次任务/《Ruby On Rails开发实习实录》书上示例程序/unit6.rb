#encoding:gbk

puts "������һ���ļ�����"
filename=gets
filename=filename.chomp
begin
	File.delete(filename)
	rescue Exception=> e
	puts "ɾ��ʧ�� #{filename}"
	else
	puts "ɾ�� #{filename} �ļ�ִ�гɹ�"
end
