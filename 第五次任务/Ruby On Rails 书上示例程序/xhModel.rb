favorite=1
while favorite<=3 do
	if(favorite==4)
		favorite+=1		
		next
	end	
	puts "我其次想听的音乐是第"+favorite.to_s+"遍循环"
	favorite+=1	
	favoriteNext=1
	while (favoriteNext<=3) do
		if(favoriteNext==4)
			favoriteNext+=1
			next
		end
		puts "我最想听的歌曲第"+favoriteNext.to_s+"遍循环"
		favoriteNext+=1
	end
end	