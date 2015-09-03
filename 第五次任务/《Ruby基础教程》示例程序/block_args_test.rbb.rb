#encoding:UTF-8
def block_args_test
  yield()
  yield(1)
  yield(1,2,3)
end

puts "通过|a|接收块变量"
block_args_test do |a, b, c|
  p [a, b, c]
end
puts "通过*a接收变量"
block_args_test do |*a|
  p [a]
end