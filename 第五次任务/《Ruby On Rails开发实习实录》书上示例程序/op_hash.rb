#encoding:gbk
math_score={
   "����"=>100,
   "����"=>99,
   "���·"=>98,
   "��С��"=>98,
   "������"=>97
}
puts "�������¼��"+math_score.size.to_s+"��ѧ������ѧ�ɼ�"
puts "ʹ��each���������ÿ��ѧ������ѧ�ɼ���"
math_score.each do |key,value|
	puts key.to_s+"��"+value.to_s
end

