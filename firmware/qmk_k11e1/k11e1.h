#pragma once

#include "quantum.h"

#define K11E1_LED_0_PIN GP5
#define K11E1_LED_1_PIN GP6
#define K11E1_LED_2_PIN GP7
#define K11E1_LED_3_PIN GP8

extern void k11e1_led_0_on(void);
extern void k11e1_led_1_on(void);
extern void k11e1_led_2_on(void);
extern void k11e1_led_3_on(void);

extern void k11e1_led_0_off(void);
extern void k11e1_led_1_off(void);
extern void k11e1_led_2_off(void);
extern void k11e1_led_3_off(void);
