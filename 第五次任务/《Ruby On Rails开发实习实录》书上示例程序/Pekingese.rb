# encoding: gbk

class Pekingese
	def initialize(name,color,hobi)
		@name=name
		@color=color
		@hobi=hobi
	end
	
	def sayHello
		puts "����"
		puts "���� #@name "
		puts "��ϲ�� #@hobi "
	end
	
	attr_accessor :name, :color, :weight, :hobi	
end

dog=Pekingese.new("Сǿ","��ɫ","����")
puts "�������ǵõ�һֻ #{dog.color} ��С����\n�����������Ǵ���к���"
dog.sayHello


