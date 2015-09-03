class MusicAvi
  def play   
    puts ".avi格式的视频已经添加到列表中"
  end    
  end
class Music3gp
  def play 
    puts ".3gp格式的视频可以播放"
  end
end
class MusicRmv
  def play
    puts ".rmv的格式的视频在这里也可以播放，不信，你试试"
  end
end
class MusicRmvb
  def play
    puts ".rmvb格式的视频更不用说 了。"
  end
end
def playMusic(music)
  music.play
end
playMusic MusicAvi.new
playMusic Music3gp.new
playMusic MusicRmv.new
playMusic MusicRmvb.new