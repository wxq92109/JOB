#encoding:gbk

filePath="d:\\091105live.wmv"

puts "File Path: #{filePath}"
if(FileTest.exists?(filePath))
	puts "����Ȩ�ޣ� #{File.stat(filePath).mode}"
	size=FileTest.size(filePath)/1024
	puts "�ļ���С�� #{size} KB"
	puts "����ʱ�䣺 #{File.ctime(filePath)}"
	puts "����޸�ʱ�䣺 #{File.mtime(filePath)}"
	puts "������ʱ�䣺 #{File.atime(filePath)}"
else
	puts "�ļ������ڣ�"
end







