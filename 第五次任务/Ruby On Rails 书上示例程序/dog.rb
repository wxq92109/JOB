#encoding:gbk

class Dog
	puts "����һ�����͹�"
end

class Dog
	puts "�������͹�����ɫ�ǻ�ɫ"
	
	class Tail
		puts "��ֵ����������͹���һ����ɫ��β��"
	end	
end

dog=Dog.new

class << dog
	def show
		puts "�����ˣ����˻���������һ��СƤ��"
	end
end

dog.show
