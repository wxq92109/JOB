
File.open("D:\rubytest.txt") do |io|
  p io.getc
  p io.ungetc
  p io.gets
end