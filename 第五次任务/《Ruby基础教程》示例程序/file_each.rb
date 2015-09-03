
class File_each
  file = File.open("D:/rubytest.txt")
  file.each_line do |line|
    print line
  end
  file.close
end