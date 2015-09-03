#encoding: UTF-8
class Hash_each2
  sum = 0
  outcome ={"参加费" =>1000,"挂件费" =>1000,"联欢会费用" =>4000}
  outcome.each do |item, pair|
    sum += pair[1]
  end
  puts "合计：#{sum}"
end