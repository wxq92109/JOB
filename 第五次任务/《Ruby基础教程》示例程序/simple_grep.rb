# encoding:GBK
class Simple_grep
  
  pattern = Regexp.new(ARGV[0])
  filename = ARGV[1]  
  print pattern,filename,"\n"
  print "the rest file  is:\n"
  file = File.open(filename)
  file.each_line do |line|
    if pattern =~ line
      puts line
    end
  end
  file.close
end