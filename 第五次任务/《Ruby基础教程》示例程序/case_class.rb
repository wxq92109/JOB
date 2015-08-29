
class Case_class

  array = ["a",1,nil]
  array.each do |item|
    case item
      when String
        puts item," is a string"
      when Numeric
        puts item,"item is a numeric"
      else
        puts item,"item is something"
    end
  end
end