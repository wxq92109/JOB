
class File_open_no_block
  file = File.open("D:/rubytest.txt")
  begin
  file.each_line do |line|
    print line
  end
  ensure
    file.close
  end
end