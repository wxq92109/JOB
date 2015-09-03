
str1 = "Ruby"
str2 = "Python"

class << str1
  def hello
    "hello,#{self}!"
  end
end

p str1.hello
#p str2.hello  ±¨´í