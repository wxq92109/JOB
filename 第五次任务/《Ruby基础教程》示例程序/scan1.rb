
"abracatabra".scan(/.a/) do |matched|
  p matched
end

str = "abc  def  g  hi"
p str.sub(/\s+/,' ')
p str.gsub(/\s+/,' ')