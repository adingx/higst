

all: bin_playbin bin_subtitle bin_shortcutPipeline bin_progressiveStreaming bin_whiteBalance bin_audioVisial bin_customPlaybin

bin_playbin: 01-playbin.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_subtitle: 02-subtitle.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_shortcutPipeline: 03-shortcut-pipeline.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0 gstreamer-audio-1.0`

bin_progressiveStreaming: 04-progressive-streaming.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_whiteBalance: 05-white-balance.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0 gstreamer-video-1.0`

bin_audioVisial: 06-audio-visualization.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_customPlaybin: 07-custom-playbin.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`




clean:
	rm -rf bin_*

