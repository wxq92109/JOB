class Print_hayasi
  # encoding: GB2312
  #����
  names = ["Jack","Marry_Jack","Alia","Hellen"]
  print "the first name is:",names[0],"\n"
  puts names;
  print "the size of names:",names.size,"\n";
  #�����each����
  names.each do |n|
      if /Jack/ =~n
       puts n
      end
  end
  #ɢ��
  #address = {pingying:"gaoqiao",postal:"551500",tel:"18386229487"}
  #print address[:name]
  
  #���ű��ʽ
  index = /Ruby/ =~ "yet Another Ruby Hacker"
  p index
end