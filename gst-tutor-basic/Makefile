
all: bin_hello bin_concepts bin_dynamicPipelines bin_timeMgr bin_gui bin_formatPad bin_mediaInfoGethering bin_streaming bin_playbackSpeed

bin_hello: 01-hello.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_concepts: 02-concepts.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_dynamicPipelines: 03-dynamic-pipelines.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_timeMgr: 04-time-management.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_gui: 05-gui.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gtk+-3.0 gstreamer-1.0`

bin_formatPad: 06-formats-and-pad.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_multiThread: 07-multithread.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_shortcutPipeline: 08-shortcut-pipeline.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0  gstreamer-audio-1.0`

bin_mediaInfoGethering: 09-media-information-gathering.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0  gstreamer-pbutils-1.0`

bin_streaming: 12-streaming.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

bin_playbackSpeed: 13-playback-speed.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`

clean:
	rm -rf bin_*

