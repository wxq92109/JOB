class Find
  def self.post
    puts "使用的地址是：http://www.baidu.com"
  end 
  def self.method_missing pd
    puts "地址出错，请检查....出错地址是：http://www"
  end  
end
puts Find.post
puts Find.show


class Roman
 def self.method_missing name, *args
  roman = name.to_s
  if(roman =~ /^[IVXLC]*$/)
   roman.gsub!("IV", "IIII")
   roman.gsub!("IX", "VIIII")
   roman.gsub!("XL", "XXXX")
   roman.gsub!("XC", "LXXXX")
   return(roman.count("I") +
       roman.count("V") * 5 +
       roman.count("X") * 10 +
       roman.count("L") * 50 +
       roman.count("C") * 100)
  else
   super(name, *args)
  end
 end
end
 

