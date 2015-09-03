
module Ennumerable
  def each_with_index
    index = 0
    each do |item|
      yield(item, index)
      index += 1
    end
    end
end