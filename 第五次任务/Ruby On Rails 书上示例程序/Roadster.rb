#encoding: gbk

class Roadster
	def init
		@brand="BYD"
		@color="��ɫ"
		@weight="1800kg"
		@F_zero="210km/h"
	end
	
	attr :brand, false
	attr_accessor :color
	attr_reader :weight, :F_zero	
end

def showCar(car)
	puts "==========================="
	puts "��������Ʒ���ǣ�"+car.brand
	puts "����������ɫ�ǣ�"+car.color
	puts "�����������ʱ��Ϊ��"+car.F_zero
	puts "�������ĳ�������Ϊ��"+car.weight
end

roadster=Roadster.new
roadster.init		#�ȳ�ʼ��һ��ʵ������
showCar(roadster)	#չʾ������
roadster.color="��ɫ"
showCar(roadster)	#չʾ������

