// Runtime tuning for the Halcyon Cirque trackpad on the left half.
// The trackpad settings are only built into the cirque firmware; the values
// below are the current defaults, so change them to adjust behaviour.

#include QMK_KEYBOARD_H

#ifdef HLC_CIRQUE_TRACKPAD
#    include "drivers/sensors/cirque_pinnacle_gestures.h"
#endif

void keyboard_post_init_user(void) {
#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
    // Auto mouse layer runs on whichever half is plugged in, so enable it on both.
    set_auto_mouse_enable(true);
#endif

#ifdef HLC_CIRQUE_TRACKPAD
    // Pointer speed. Default is ~740 for the 35mm pad; higher is faster.
    cirque_pinnacle_set_cpi(740);

    // Tap the pad to left click.
    cirque_pinnacle_enable_tap(true);

    // Cursor keeps moving briefly after a flick.
    cirque_pinnacle_enable_cursor_glide(false);
    // Movement (px) needed before glide kicks in; raise it if the cursor drifts on lift-off.
    cirque_pinnacle_configure_cursor_glide(10);

    // Scroll by circling around the outer edge of the pad.
    cirque_pinnacle_enable_circular_scroll(true);
    // outer_ring_pct: width of the edge ring that starts a scroll, as % of the radius
    // trigger_px:     movement (0-127) before deciding whether it's a scroll
    // trigger_ang:    how tangential the movement must be (pi = 32768; 9102 = 50 degrees)
    // wheel_clicks:   scroll steps per full circle
    // left_handed:    reverse scroll direction
    cirque_pinnacle_configure_circular_scroll(33, 16, 9102, 18, false);
#endif
}
