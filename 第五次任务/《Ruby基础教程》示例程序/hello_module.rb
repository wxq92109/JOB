#����ģ��
module HelloModule
  Version = "1.0"
  def hello(name)
    puts "hello,#{name}"
  end
  module_function :hello#ָ��hello����Ϊģ�麯��
end

p HelloModule::Version
HelloModule.hello("Jack")

include HelloModule
p Version
hello("Jack")