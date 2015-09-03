
class Hello_class2
  attr_accessor :name
  def initialize(myname = "Ruby")
    @name = myname
  end
  def hello
    puts "hello world,I am #{@name}"
  end
  def greet
    print "Hi,I am #{name}"
  end
  def test_name
    name = "Ruby"
    self.name = "Ruby"
  end
end

bob = Hello_class2.new("Bob")
alice = Hello_class2.new("alice")
ruby = Hello_class2.new
p bob.name
bob.name = "Robert"
bob.hello

bob.test_name
bob.hello