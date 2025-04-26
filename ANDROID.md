
# Gstreamer Android


### Installing for Android development
https://gstreamer.freedesktop.org/documentation/installing/for-android-development.html?gi-language=c

* Download android-gstreamer prebuilt libs
	https://gstreamer.freedesktop.org/data/pkg/android/

* The tutorials code are in the `gst-docs` in the `examples/tutorials/` folder.
	https://gitlab.freedesktop.org/gstreamer/gstreamer/-/tree/main/subprojects/gst-docs

```shell
# or wget https://github.com/GStreamer/gstreamer/archive/refs/tags/1.26.1.tar.gz
git clone https://github.com/GStreamer/gstreamer
cd gstreamer

# android mediacodec porting for gst plugin
ls -R ./gst-plugins-bad/sys/androidmedia

# android-tutorials
cd gstreamer/subprojects/gst-docs/examples/tutorials/android/
vi -d android-tutorial-1/jni/tutorial-1.c android-tutorial-5/jni/tutorial-5.c
```



### Android Tutorials
https://gstreamer.freedesktop.org/documentation/tutorials/android/index.html?gi-language=c

Each Android tutorial builds on top of the previous one and adds progressively more functionality, 
	until a working media player application is obtained in Android tutorial 5: A Complete media player. 

This is the same media player application used to advertise GStreamer on Android, 
	and the download link can be found in the Android tutorial 5: A Complete media player page.


* Android tutorial 1: Link against GStreamer 
	https://gstreamer.freedesktop.org/documentation/tutorials/android/link-against-gstreamer.html?gi-language=c

* Android tutorial 2: A running pipeline
	https://gstreamer.freedesktop.org/documentation/tutorials/android/a-running-pipeline.html?gi-language=c

* Android tutorial 3: Video
	https://gstreamer.freedesktop.org/documentation/tutorials/android/video.html?gi-language=c

* Android tutorial 4: A basic media player
	https://gstreamer.freedesktop.org/documentation/tutorials/android/media-player.html?gi-language=c

* Android tutorial 5: A Complete media player
	https://gstreamer.freedesktop.org/documentation/tutorials/android/a-complete-media-player.html?gi-language=c


