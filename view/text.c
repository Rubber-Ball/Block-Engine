#include <X11/Xlib.h>
#include <string.h>
#include <stdio.h>




void draw_text(Display *display, Window window, GC gc, int x, int y, char *text, long color, int size) {
    // Set color
    XSetForeground(display, gc, color);

    // Build font string dynamically (roughly)
    char fontname[128];
    snprintf(fontname, sizeof(fontname), "-misc-fixed-*-*-*-*-%d-*-*-*-*-*-*-*", size);

    XFontStruct *font = XLoadQueryFont(display, fontname);
    if (font) {
        XSetFont(display, gc, font->fid);
    } else {
        printf("Warning: Failed to load font size %d. Using default.\n", size);
    }

    // Draw string
    XDrawString(display, window, gc, x, y, text, (int)strlen(text));
}


