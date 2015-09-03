
class Acc_test
  def pub
    puts "pub is a public method."
  end
  public :pub
  def priv
    puts "priv is private method."
  end
  private :priv

end

  acc = Acc_test.new
  acc.pub
  acc.priv
