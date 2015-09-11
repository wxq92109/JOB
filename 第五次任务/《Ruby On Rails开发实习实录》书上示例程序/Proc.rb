def info(pr)
  pr.call
end
pro=Proc.new{
@name="郭靖"
@age=20
@expression="人虽然笨，但纯真善良是不可改变的事实"
puts "名字是：#{@name}"
puts "年龄是：#{@age}"
puts "描述是：#{@expression}"
}
info(pro)

