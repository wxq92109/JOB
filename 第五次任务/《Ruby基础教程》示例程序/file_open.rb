
class File_open
  File.open("D:/rubytest.txt").each_line do |file|
    file.each_line do |line|
      print line
    end
  end
end