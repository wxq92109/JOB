
class Strip
  puts "------------------",ARGV[0]
  file = File.open(ARGV[0])
  puts file
  file.each_line do |line|
    next if/^s*$/=~line#����
    next if/^#/=~line# ��#��ͷ����
    puts line
  end
  file.close
end