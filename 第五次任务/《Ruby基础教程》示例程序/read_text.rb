class Read_text
  filename = ARGV[0]
  puts filename
  file = File.open(filename)
  text = file.read
  puts text
  file.close
  #如果只是读取文件里的内容 可以这样做
  filename = ARGV[0]
  text = File.read(filename)
  print text
end