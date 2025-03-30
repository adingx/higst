
all: bin_glib bin_gobject bin_gtk bin_gst

bin_glib: hello-glib.c
	gcc $^ `pkg-config --cflags --libs glib-2.0` -o $@

bin_gobject: hello-gobject.c
	gcc $^ `pkg-config --cflags --libs glib-2.0 gobject-2.0` -o $@

bin_gtk: hello-gtk.c
	gcc $^ `pkg-config --cflags --libs glib-2.0 gobject-2.0 gtk+-3.0` -o $@

bin_gst: hello-gst.c
	gcc -Wall $^ -o $@ `pkg-config --cflags --libs gstreamer-1.0`


clean:
	rm -f bin_*
