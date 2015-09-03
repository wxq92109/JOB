
ary = []
10.times do |i|
  ary << i
end
p ary

ary.clear
2.upto(10) do |i|
  ary << i
end
p ary

ary.clear
10.downto(2) do |i|
  ary << i
end
p ary

ary.clear
2.step(10,3) do |i|
  ary << i
end
p ary

