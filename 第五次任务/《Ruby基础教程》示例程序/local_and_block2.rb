
x = y = z = 0
ary = [1,2,3]

ary.each do |x|
  y = x
  z = x
  p [x, y, z]
end

p [x, y, z]