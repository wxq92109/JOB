class Read_text
  filename = ARGV[0]
  puts filename
  file = File.open(filename)
  text = file.read
  puts text
  file.close
  #���ֻ�Ƕ�ȡ�ļ�������� ����������
  filename = ARGV[0]
  text = File.read(filename)
  print text
end