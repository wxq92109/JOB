

def traverse2(path)
  Dir.glob(["#{path}/**/*]","#{path}/**/*"]).each do |name|
    unless File.directory?name
      process_file(name)
    end
  end
end
def process_file(path)
  puts path                 # ������
end

puts ARGV[0]#���� D:\
traverse2(ARGV[0])