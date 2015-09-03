#encoding:gbk
math_score={
   "王红"=>100,
   "岳峰"=>99,
   "李佳路"=>98,
   "张小春"=>98,
   "关世晓"=>97
}
puts "这里面记录了"+math_score.size.to_s+"个学生的数学成绩"
puts "使用each迭代器输出每个学生的数学成绩："
math_score.each do |key,value|
	puts key.to_s+"："+value.to_s
end

