from pytube import Playlist,YouTube
import sys

# how to give input
'''
python3 <playlist_url> <start_index> <end_index>
'''

#error handling
'''
Found a solution. cipher.py Line 411
transform_plan_raw = find_object_from_startpoint(raw_code, match.span()[1] - 1)
to
transform_plan_raw = js
'''

'''
in C:\Python38\lib\site-packages\pytube\parser.py
Change this line:
152: func_regex = re.compile(r"function\([^)]+\)")
to this:
152: func_regex = re.compile(r"function\([^)]*\)")
'''


playlist_url = sys.argv[1]
playlist_start_index = int(sys.argv[2])
playlist_end_index = int(sys.argv[3])

# Create a Playlist object
playlist = Playlist(playlist_url)

# Print some information about the playlist
print(f'Downloading playlist: {playlist.title}')
print(f'Number of videos in playlist: {len(playlist.video_urls)}')


# # 
# for i in range(len())
# Loop through each video in the playlist and download it
for index in range(playlist_start_index,playlist_end_index+1):
    video = YouTube(playlist.video_urls[index])
    print(f'Downloading video no. ==> {index} [{playlist.video_urls[index]}]')
    video.streams.get_highest_resolution().download()
