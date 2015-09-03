#encoding: gbk

class Roadster
	def init
		@brand="BYD"
		@color="黄色"
		@weight="1800kg"
		@F_zero="210km/h"
	end
	
	attr :brand, false
	attr_accessor :color
	attr_reader :weight, :F_zero	
end

def showCar(car)
	puts "==========================="
	puts "这辆车的品牌是："+car.brand
	puts "这辆车的颜色是："+car.color
	puts "这辆车的最高时速为："+car.F_zero
	puts "这辆车的车体重最为："+car.weight
end

roadster=Roadster.new
roadster.init		#先初始化一下实例变量
showCar(roadster)	#展示这辆车
roadster.color="红色"
showCar(roadster)	#展示这辆车

