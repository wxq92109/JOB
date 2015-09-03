require 'find'

IGNORES = [ /^\./, /^CVS$/, /^RCS$/ ]

def listdir(top)
  Find.find(top) do |path|
    if FileTest.directory?(path)  # ���path��Ŀ¼
      dir, base = File.split(path)
      IGNORES.each do |re|
        if re =~ base             # ��Ҫ���Ե�Ŀ¼
          Find.prune              # ���Ը�Ŀ¼�µ����ݵĲ���
        end
      end
      puts path                   # ������
    end
  end
end

listdir(ARGV[0])
