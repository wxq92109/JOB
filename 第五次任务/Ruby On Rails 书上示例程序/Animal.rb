# encoding: gbk

class Animal
	def initialize(name)
		@name=name
	end
	
	def sayHello
		puts ""
	end
end

class Dog<Animal
	def sayHello
		puts "我是小狗 #@name ，汪汪"
	end	
end

class Person<Animal
end

class Chinese<Person
	def sayHello
		puts "你好，我是中国人，我叫 #@name "
	end	
end

class American<Person
	def sayHello
		puts "Hello, I'm American, My Name is #@name"
	end
end

dog=Dog.new("旺财")
americal=American.new("Tomson")
chinese=Chinese.new("李白衣")
dog.sayHello
americal.sayHello
chinese.sayHello

