class Read_line
  
  filename = ARGV[0]
  file = File.open(filename)
  file.each_line do |line|
    puts line
  end
  file.close
end