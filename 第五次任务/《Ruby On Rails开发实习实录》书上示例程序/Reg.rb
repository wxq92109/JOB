mutex=Mutex.new
thread=Thread.new do
  mutex.lock
  sleep 20
end
sleep 1
thread1=Thread.new do
  if mutex.try_lock
    puts "已经被锁定"
  else
    puts "不能被锁定"
  end
end

