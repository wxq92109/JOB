#encoding:gbk
score_array=["����:100","����:99","���·:98","��С��:98","������:97"]    #�����ɼ�����
score_array[5]="��С��:96"                                                                      #�������Ԫ��
puts "�������Ԫ��֮���������"
puts score_array                                                                                        #�������Ԫ��
score_array.unshift("������:100")                                                             #������ͷ�����Ԫ��  
score_array.push("��˳:95")                                                                     #������β�����Ԫ�� 
puts "��β���Ԫ��֮���������"
puts score_array                                                                                        #�������
puts "��ȡǰ�����ĳɼ���"
puts score_array[0,2]                                                                                 #��ȡ����

