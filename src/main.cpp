#include <zephyr.h>
#include <drivers/gpio.h>

gpio_dt_spec led = { .port = device_get_binding("GPIO_1"), .pin = 3 };

void main() {
    gpio_pin_configure_dt(&led, GPIO_OUTPUT_HIGH);
    while (1) {
        k_msleep(500);
        gpio_pin_toggle_dt(&led);
    }
}
