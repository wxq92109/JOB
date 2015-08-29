class Grep
  
  def simple_grep(pattern,filename)
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
  #simple_grep("file","D:\rubytest.txt")
end