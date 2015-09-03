
  hello = Proc.new do |name|
    puts "hello,#{name}"
  end

  hello.call("World")
  hello.call("Ruby")