require 'net/http'   
pages = %w(www.javaeye.com www.csdn.net www.sina.com.cn www.google.cn)   
threads = []     
for page in pages   
  threads << Thread.new(page) do |url|   
    h = Net::HTTP.new(url, 80)   
    puts "The URL is #{url} "
    puts "The #{url} "  
  end  
end    
threads.each { |t|t.join  }  



