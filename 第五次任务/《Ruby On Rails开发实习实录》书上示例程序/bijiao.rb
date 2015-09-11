bjContent="我是比较的内容"
bContent=:"我是比较的内容"
puts "用to_sym转换比较内容的结果：",bjContent.to_sym==bContent 
puts "用to_s转换比较内容的结果：",bContent.to_s==bjContent

bjObject="我是比较的对象"
bObject=:bjObject
bObjectS=%s{bjObject}
puts "比较对象的结果：",bObjectS==bObject


