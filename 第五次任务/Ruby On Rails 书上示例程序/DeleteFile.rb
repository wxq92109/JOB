#encoding:gbk

def deleteFile(fn)
	begin
		linenum=File.unlink(fn)
		puts "ɾ���ļ��ĸ���Ϊ��#{linenum}"
		rescue Exception =>e
		puts "�����쳣���쳣��ϢΪ��#{e}"
	end
end

fn="fo.txt"
deleteFile(fn)
deleteFile(fn)