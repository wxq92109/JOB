#创建模块
module HelloModule
  Version = "1.0"
  def hello(name)
    puts "hello,#{name}"
  end
  module_function :hello#指定hello方法为模块函数
end

p HelloModule::Version
HelloModule.hello("Jack")

include HelloModule
p Version
hello("Jack")