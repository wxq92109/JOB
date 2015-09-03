
class HelloWorld
  #第一种定义存储器方法
=begin
  def name#获取name
    @name
  end
  def name=(value)#修改name
    @name = value
  end
=end
  #第二种定义存储器方法
  attr_accessor :name
  def initialize(myname = "Ruby")
    @name = myname
  end
  def hello
    puts "hello world,I am #{@name}"
  end
end

  bob = HelloWorld.new("Bob")
  alice = HelloWorld.new("alice")
  ruby = HelloWorld.new
  p bob.name
  bob.name = "Robert"
  bob.hello