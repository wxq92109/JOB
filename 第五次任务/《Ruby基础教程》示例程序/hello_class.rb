
class HelloWorld
  #��һ�ֶ���洢������
=begin
  def name#��ȡname
    @name
  end
  def name=(value)#�޸�name
    @name = value
  end
=end
  #�ڶ��ֶ���洢������
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