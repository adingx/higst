
all: bin_hellogobject

bin_helloglib: helloglib.c
	gcc helloglib.c `pkg-config --cflags --libs glib-2.0` -o $@

bin_hellogobject: hellogobject.c
	gcc hellogobject.c `pkg-config --cflags --libs glib-2.0 gobject-2.0 gtk+-3.0` -o $@

clean:
	rm -f bin_*
