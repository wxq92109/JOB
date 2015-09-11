#encoding:gbk

filePath="d:\\091105live.wmv"

puts "File Path: #{filePath}"
if(FileTest.exists?(filePath))
	puts "访问权限： #{File.stat(filePath).mode}"
	size=FileTest.size(filePath)/1024
	puts "文件大小： #{size} KB"
	puts "创建时间： #{File.ctime(filePath)}"
	puts "最后修改时间： #{File.mtime(filePath)}"
	puts "最后访问时间： #{File.atime(filePath)}"
else
	puts "文件不存在！"
end







