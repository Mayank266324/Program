from pytube import YouTube

def download_youtube_video(url, save_path='.'):
    try:
        # Create a YouTube object
        yt = YouTube(url)
        
        # Select the first stream with the desired file type (e.g., mp4)
        stream = yt.streams.filter(file_extension='mp4').first()
        
        # Download the video
        stream.download(output_path=save_path)
        
        print(f"Video downloaded successfully: {yt.title}")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage:
video_url = "https://www.youtube.com/watch?v=JRR8RCKMKjA"  # Replace with your video URL
download_youtube_video(video_url, save_path="D:\Movies")