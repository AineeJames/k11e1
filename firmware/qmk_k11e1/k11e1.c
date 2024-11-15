#include "k11e1.h"

#define FOR_PINS(DO) DO(0) DO(1) DO(2) DO(3)

#define ON_FUNC(pin)                                  \
    void k11e1_led_##pin##_on(void) {                 \
        gpio_write_pin(K11E1_LED_##pin##_PIN, false); \
    }

#define OFF_FUNC(pin)                                \
    void k11e1_led_##pin##_off(void) {               \
        gpio_write_pin(K11E1_LED_##pin##_PIN, true); \
    }

FOR_PINS(ON_FUNC)
FOR_PINS(OFF_FUNC)

void keyboard_post_init_kb(void) {
    gpio_set_pin_output(K11E1_LED_0_PIN);
    gpio_set_pin_output(K11E1_LED_1_PIN);
    gpio_set_pin_output(K11E1_LED_2_PIN);
    gpio_set_pin_output(K11E1_LED_3_PIN);

    keyboard_post_init_user();
}
