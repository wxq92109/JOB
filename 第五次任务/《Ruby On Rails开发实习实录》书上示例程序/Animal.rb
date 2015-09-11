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
		puts "����С�� #@name ������"
	end	
end

class Person<Animal
end

class Chinese<Person
	def sayHello
		puts "��ã������й��ˣ��ҽ� #@name "
	end	
end

class American<Person
	def sayHello
		puts "Hello, I'm American, My Name is #@name"
	end
end

dog=Dog.new("����")
americal=American.new("Tomson")
chinese=Chinese.new("�����")
dog.sayHello
americal.sayHello
chinese.sayHello

