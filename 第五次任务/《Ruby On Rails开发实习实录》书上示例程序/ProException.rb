class MoreThanException<Exception 
end
class LessThanException<Exception 
end
class NoMethodException<Exception  
end
def pro1 name,age
  puts "我的名字是：#{name},年龄是：#{age},我是设置的传入参数比定义的参数少的异常类型"  
end
begin
  pro1 "追寻梦想"
rescue ArgumentError  
  puts "错误的类型是："+LessThanException.to_s, "出现的异常信息是：您传入的参数比原来的参数少了啊。"
end
def pro2 name
  puts "您的名字是:#{name},我是长生不老的，所以没有年龄"
end
begin
  pro2 "留言","需要"
rescue ArgumentError
  puts "错误的类型是："+MoreThanException.to_s, "出现的异常信息是：您传入的参数比原来的参数多了啊。"
end
def show
  puts "你知道吗，有一种执着被叫做等待。"
end
def fucture bookname
  puts "从#{bookname}中，我读懂了四个字：等待和希望。我是设置的程序中没有次方法的异常"

end
begin 
  show
rescue NoMethodError    
 puts "错误的类型是："+NoMethodException.to_s, "出现的异常信息是：您所调用的方法没有在程序中没有声明"
end




