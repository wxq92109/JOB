
def pb(i)
  #
  #
  printf("$08b\n",i&0b11111111)
end
  b = 0b11110000
  pb(b)
  pb(~b)
  pb(b&0b00010001)
  pb(b|0b00010001)
  pb(b ^ 0b00010001)
  pb(b >> 3)
  pb(b << 3)
