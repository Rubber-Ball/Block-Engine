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

int Draw_Text_With_Background_Color(Display *display, Window window, GC gc, int x, int y, char *text, long color, int size, int screen, long background_color, long text_color){

    XSetForeground(display, gc, text_color);

    XSetBackground(display, gc, background_color);

    XDrawImageString(display, window, gc, x, y, text, size);

}
