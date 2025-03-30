
# 10 gstreamer tool - gst-inspect
#    https://gstreamer.freedesktop.org/documentation/tutorials/basic/gstreamer-tools.html?gi-language=c

# 11 debug tool - GST_DEBUG, GST_DEBUG_DUMP_DOT_DIR
#    https://gstreamer.freedesktop.org/documentation/tutorials/basic/debugging-tools.html?gi-language=c

# 14 handy elements - gst-launch-1.0
# 	 https://gstreamer.freedesktop.org/documentation/tutorials/basic/handy-elements.html?gi-language=c

# 16: Platform-specific elements - playbin/autovideosink
# 	  https://gstreamer.freedesktop.org/documentation/tutorials/basic/platform-specific-elements.html?gi-language=c


# ISSUE - undefined reference to `gst_element_request_pad_simple'
	https://gitlab.freedesktop.org/gstreamer/gst-docs/-/issues/91

	This is correct and expected. gst_element_request_pad_simple is new API and is currently only available in git master (to be in the 1.20 release).  1.20 is not currently available in any released version of GStreamer in stable linux distributions.
If you want to build the tutorials, you can use the 1.18 branch of this repository to build against a 1.18+ version of GStreamer.  1.16 for 1.16+ version of GStreamer.  Some examples may be backward-compatible even further however we don't currently have branches in this repository (gst-docs) for them.




