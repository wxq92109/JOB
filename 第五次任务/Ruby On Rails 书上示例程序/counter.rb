# encoding:gbk

class Counter
	def Add(n1,n2)
		n1+n2
	end
	
	def Subtract(n1,n2)
		n1-n2
	end
	
	def Ride(n1,n2)
		n1*n2
	end
	
	def Divide(n1,n2)
		n1/n2
	end	
end

c=Counter.new

puts "8+4=#{c.Add(8,4)}"
puts "8-4=#{c.Subtract(8,4)}"
puts "8*4=#{c.Ride(8,4)}"
puts "8/4=#{c.Divide(8,4)}"
