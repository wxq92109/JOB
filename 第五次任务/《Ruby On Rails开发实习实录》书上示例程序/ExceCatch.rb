class Student   
  def student name,age
    @name=name
    @age=age
    puts "我叫#{@name},年龄#{@age}"
  end
  def happy hoppy
    @hoppy=hoppy
    puts "我的爱好是#{@hoppy}"
  end
  def nengli num1,num2
    @num1=num1
    @num2=num2
    @avgNum=num1/num2
    puts "但我的数学很不好，我常常不知道#{@avgNum}为什么会等于#{@num1}/#{@num2}"
  end
  begin
  student "黄蓉"
  rescue
  puts "方法student需要两个参数，而你传入的只是一个参数。" 
end
begin
  happy 
rescue
  puts "参数原本就该属于人家happy的，你却不给人家，真缺德。"
end
begin
  nengli 2,0
rescue
  puts "哎呀，你笨吗，傻子都知道除数不能为0啦。"
end
end

