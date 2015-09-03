#encoding:gbk
score_array=["王红:100","岳峰:99","李佳路:98","张小春:98","关世晓:97"]    #创建成绩数组
score_array[5]="于小六:96"                                                                      #添加数组元素
puts "添加数组元素之后的新数组"
puts score_array                                                                                        #输出数组元素
score_array.unshift("李云龙:100")                                                             #向数组头部添加元素  
score_array.push("张顺:95")                                                                     #向数组尾部添加元素 
puts "首尾添加元素之后的新数组"
puts score_array                                                                                        #输出数组
puts "获取前两名的成绩："
puts score_array[0,2]                                                                                 #截取数组

