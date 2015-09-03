
class Hello_count
  @@count = 0
  attr_accessor :name
  def initialize(myname = "Ruby")
    @name = myname
  end
  def hello
    @@count += 1
    puts "hello world,I am #{@name}"
  end

  def Hello_count.count
    @@count
  end
end

bob = Hello_count.new("Bob")
alice = Hello_count.new("alice")
ruby = Hello_count.new
bob.hello
bob.hello
bob.hello


print "the value of count is:#{Hello_count.count}"
