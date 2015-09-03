


File.open(ARGV[0])do |io|
  p io.gets
  io.rewind
  p io.gets
end
