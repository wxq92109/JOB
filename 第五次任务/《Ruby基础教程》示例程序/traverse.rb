def traverse(path)
  if File.directory?(path)  # �����Ŀ¼
    dir = Dir.open(path)
    while name = dir.read
      next if name == "."   # ��
      next if name == ".."  # ��
      traverse(path + "/" + name)
    end
    dir.close
  else
    process_file(path)      # �����ļ�
  end
end

def process_file(path)
  puts path                 # ������
end

puts ARGV[0]#���� D:\
traverse(ARGV[0])
