#encoding:gbk

target="D:/SoftLog"	#ָ��Ŀ��Ŀ¼
Dir.chdir(target)		#����ǰĿ¼�л���Ŀ��Ŀ¼
Dir.foreach(Dir.pwd) do |item|
	if(FileTest.directory?(item))
		begin
			Dir.delete(item)
			rescue Exception => e
			puts "Ŀ¼ #{item} ɾ��ʧ�ܣ��쳣��Ϣ��#{e}"
			else
			puts "Ŀ¼ #{item} ɾ���ɹ�"
		end
	end	
end

