/*
 * FROM: https://gist.github.com/17twenty/8422857
 * helloglib.c
 * Using glib libraries to do a hello world
 * Compile with:
 * gcc helloglib.c `pkg-config --cflags --libs glib-2.0` -o helloglib
 */
#include <glib.h>

int
main (void)
{
	g_print("runtime version = %d.%d.%d\n", glib_major_version, glib_minor_version, glib_micro_version);

    GString *my_string = g_string_new("This Hello world is %d chars long\n");
 	g_print(my_string->str, my_string->len);
    g_string_free(my_string, TRUE);
    return 0;
}
