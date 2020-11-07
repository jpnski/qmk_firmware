#include "amj40.h"
#include "led.h"

void matrix_init_kb(void) {
	matrix_init_user();
	led_init_ports();
};

void matrix_scan_kb(void) {
	matrix_scan_user();
};

void led_init_ports(void) {
    DDRB |= (1<<2);
}

void led_set_kb(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        PORTB &= ~(1<<2);
    } else {
        PORTB |= (1<<2);
    }
}
