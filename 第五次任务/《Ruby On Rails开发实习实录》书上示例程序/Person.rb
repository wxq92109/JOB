# encoding: gbk

class Person
	def setName(name)
		@name=name
	end
	
	def setAge(age)
		@age=age
	end
	
	def setIsMale(isMale)
		@isMale=isMale
	end
	
	def say		
		sex=@isMale ? "С�к�" : "СŮ��"
		puts "��Һã��ҽ� #{@name} ������һ�� #{sex} ���ҽ��� #{@age} ��"
		
	end
end

zhh=Person.new
zhh.setName("�źƻ�")
zhh.setAge(5)
zhh.setIsMale(true)
zhh.say