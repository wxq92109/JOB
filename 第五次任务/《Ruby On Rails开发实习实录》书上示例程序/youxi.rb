SHE=["S","H","E"]
zifu=["温柔","自信","勇气"]
flh=["cyr","wdc","wz","yyl"]
S,H,E=zifu
puts "\n第一个puts执行的结果:", "S代表的是"+S,"H代表的是"+H,"E代表的是"+E
S,H,E=flh
puts  "\n第二个puts执行的结果:","S和"+S+"搭档","H和"+H+"搭档","E和"+E+"搭档"
S,H,*E=flh
puts "\n第三个puts执行的结果:", "S和"+S+"搭档","H和"+H+"搭档","E可以和",E,"任何一个搭档"
S,*H,E=flh
puts "\n第四个puts执行的结果:", "S和"+S+"搭档","H可以和",H,"任何一个搭档","E和"+E+"搭档"
*S,H,E=flh
puts "\n第五个puts执行的结果:", "S可以和",S,"任何一个搭档","H和"+H+"搭档","E和"+E+"搭档"
a,b,c,d=flh
puts  "\n第六个puts执行的结果:","a代表"+a,"b代表"+b,"c代表"+c,"d代表"+d
a,(b,c),d=SHE
puts "第七个puts执行的结果是：cyr和",a,"搭档\nwdc和",b,"搭档\nwz和",c,"搭档\nyyl和",d,"搭档"
a,(b,*c),d="S",["H","E"]
puts "第八个puts执行的结果是：cyr和",a,"搭档\nwdc和",b,"搭档\nwz和",c,"搭档\nyyl和",d,"搭档"




tianqi=["春天","夏天","秋天","冬天"]
daibiao=["cyr代表温暖的春天(77℉)","wdc代表炎热的夏天(95℉)","wz代表凉爽的秋天(59℉)","yyl代表酷冷的冬天(41℉)"]
a,b=tianqi
puts "a代表的是"+a,"b代表的是"+b
a,*b=daibiao
puts "a代表的是"+a+"\n数组b代表的是",b
a,b="风雨哈佛路",*tianqi
puts a,b
