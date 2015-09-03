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
  #ʹ��extend���������෽��
  extend ClassMethods
  #ʹ��include����ʵ������
  include InstanceMethod
end

p MyClass.cmethod

p MyClass.new.imethod