class Scopetest
  #require "./sub"
  $x = 0
  $y = 0
  x = 0
  require "./sub"

  p $x
  p x
  p $y
end