class Comment_sample
  
  x = 10#宽
  y = 20#长
  z = 30#高
  #计算表面积和体积
  area = (x*y+y*z+z*x)*2
  volume = x*y*z;
  
  #输出
  # encoding:GBK
  print "表面积=",area
  print "体积=",volume,"\n"
  
end