require "open-uri"
class ReadUri

# ͨ��HTTP��ȡ����
  open("http://www.ruby-lang.org") do |io|
    puts io.read  # ��Ruby�Ĺٷ���ҳ���������̨
  end

# ͨ��FTP��ȡ����
  url = "ftp://www.ruby-lang.org/pub/ruby/2.0/ruby-2.0.0-p0.tar.gz"
  open(url) do |io|
    open("ruby-2.0.0-p0.tar.gz", "w") do |f|  # �򿪱����ļ�
      f.write(io.read)
    end
  end

end