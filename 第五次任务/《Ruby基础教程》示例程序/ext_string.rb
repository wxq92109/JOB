#在原有类的基础上添加新方法
class String
  def count_word
    ary = self.split(/\s+/)
    return ary.size
  end
end

str = "Just another Ruby NewBie"
p str.count_word