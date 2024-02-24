

#include <xcb/xcb.h>
#include <xcb/xcb_aux.h>
#include <xcb/xcb_event.h>
#include <xcb/xcbext.h>
#include <xcb/xcb_ewmh.h>
#include <xcb/xcb_icccm.h>
#include <xcb/xcb_keysyms.h>
#include <xcb/xcb_cursor.h>
#include <xcb/xinerama.h>

#include <xcb/xcb_xrm.h>
#include <xcb/xcb_icccm.h>
#include <xcb/xcb_keysyms.h>

#include "xcb_trl.h"


int
main()
{
    int i;
    i = 1;
    i += ++i + i++;
    ++i;
    return 0;
}
