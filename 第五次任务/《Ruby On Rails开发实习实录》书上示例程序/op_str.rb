#encoding:gbk
str1="������¥\n"
str2="���Ŷ�ͥˮ����������¥\n"
str3="��������壬Ǭ����ҹ��\n"
str4="������һ�֣��ϲ��й���\n"
str5="�����ɽ����ƾ��������\n"
str6=str1+str2+str3+str4+str5                    #�ϲ��ַ���
puts str6
str="this is an ancient poetry"             
puts str6.replace(str)                                 #�滻�ַ���
puts str6.dup                                            #�����ַ���
puts str6.capitalize                                    #�ı��ַ���
puts str6[11,14]                                        #��ȡ���ַ���
puts str6<=>str                                        #�Ƚ��ַ���
