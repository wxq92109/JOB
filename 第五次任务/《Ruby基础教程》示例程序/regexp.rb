
re1 = Regexp.new("abc*def")
re2 = Regexp.new(Regexp.quote("abc*def"))

p (re1 =~ "abc*def")
p (re2 =~ "abc*def")

/(.)(.)(.)/ =~ "abc"
first = $1
second = $2
third = $3
p first
p second
p third
