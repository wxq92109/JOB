class Bigger_smaller
  
  a = 20;
  if a >= 10 then#可以去掉then
    print "bigger\n";
  end
  if a <= 9 then
    print "smaller\n"
  end
  
  #添加else
  if a < 10
    print "smaller\n"
  else
    print "bigger\n"
  end
  
  #循环 ---while语句
  i = 1
  while i <= 10
    print i,"->"
    i =i+1 ;
  end
  print "\n"
  #times方法
  100.times do
    print "all work and no play Jack  a dull boy\n"
  end

end