class Use_grep
  require "./grep"
  
  pattern = Regexp.new(ARGV[0])
  filename = ARGV[1]
  simple_grep(pattern,filename)#调用simple_grep方法
end