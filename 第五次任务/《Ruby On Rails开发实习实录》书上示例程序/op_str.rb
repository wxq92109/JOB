#encoding:gbk
str1="登岳阳楼\n"
str2="昔闻洞庭水，今上岳阳楼\n"
str3="吴楚东南坼，乾坤日夜浮\n"
str4="亲朋无一字，老病有孤舟\n"
str5="戎马关山北，凭轩涕泗流\n"
str6=str1+str2+str3+str4+str5                    #合并字符串
puts str6
str="this is an ancient poetry"             
puts str6.replace(str)                                 #替换字符串
puts str6.dup                                            #复制字符串
puts str6.capitalize                                    #改变字符串
puts str6[11,14]                                        #获取子字符串
puts str6<=>str                                        #比较字符串
