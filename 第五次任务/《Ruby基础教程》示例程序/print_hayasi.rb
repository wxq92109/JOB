class Print_hayasi
  # encoding: GB2312
  #数组
  names = ["Jack","Marry_Jack","Alia","Hellen"]
  print "the first name is:",names[0],"\n"
  puts names;
  print "the size of names:",names.size,"\n";
  #数组的each方法
  names.each do |n|
      if /Jack/ =~n
       puts n
      end
  end
  #散列
  #address = {pingying:"gaoqiao",postal:"551500",tel:"18386229487"}
  #print address[:name]
  
  #睁着表达式
  index = /Ruby/ =~ "yet Another Ruby Hacker"
  p index
end