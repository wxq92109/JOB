#encoding:UTF-8
class Break_next_redo

  puts "break的例子"
  i = 0
  names =   ["Perl","Python","Ruby","Scheme"]
  names.each do |lang|
    i += 1
    if i == 3
      break
    end
    p [i,lang]
  end

  puts "next 的例子"
  i = 0
  ["Perl","Python","Ruby","Scheme"].each do |lang|
    i += 1
    if i == 3
      next
    end
    p [i,lang]
  end
  puts "redo 的例子"
  i = 0
  ["Perl","Python","Ruby","Scheme"].each do |lang|
    i += 1
    if i == 3
      redo
    end
    p [i,lang]
  end
end