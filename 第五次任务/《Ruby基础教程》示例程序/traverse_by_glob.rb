

def traverse2(path)
  Dir.glob(["#{path}/**/*]","#{path}/**/*"]).each do |name|
    unless File.directory?name
      process_file(name)
    end
  end
end
def process_file(path)
  puts path                 # Êä³ö½á¹û
end

puts ARGV[0]#²âÊÔ D:\
traverse2(ARGV[0])