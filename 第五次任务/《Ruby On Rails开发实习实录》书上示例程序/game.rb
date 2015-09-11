#encoding:gbk
judge = true				#设置一个bool变量，用于判断是否跳出while循环语句
while judge				#创建一个while循环语句
 c = 15					#设置一个变量，和用户输入的值进行比较
 puts "请输入0——100之间的数字，猜测系统内置数字的大小"	#输出提示信息
 d = gets					#获取用于输入的值
 if c > d.to_i				#用于判断用户输入的值，如果大于用户输入的值，输出提示信息
   puts "你输入的数字小了"	#输出提示信息
 end						#结束if语句
 if c<d.to_i				#用于判断用户输入的值是否大于c变量
   puts "你输入的数字大了"	#输出提示信息
 end						#结束if语句
 if c ==d.to_i				#如果用户输入的值和c相等，输出相应信息
   puts "恭喜你，你猜对了"	#输出信息
   judge = false				#将judge设置为false，跳出while循环语句
 end						#if语句结束标记
end						#while循环语句结束标记
