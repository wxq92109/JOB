module ClassMethods
  def cmethod
    "class method"
  end
end
module InstanceMethod
  def imethod
    "instance method"
  end
end
class MyClass
  #使用extend方法定义类方法
  extend ClassMethods
  #使用include定义实例方法
  include InstanceMethod
end

p MyClass.cmethod

p MyClass.new.imethod