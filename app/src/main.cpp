#include <zephyr/drivers/gpio.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/sensor.h>
#include "../drivers/our_driver/our_driver.h"

#define SLEEP_TIME_MS 1000

// /* The devicetree node identifier for the "app-led" alias. */
// #define LED_NODE DT_ALIAS(app_led)

// static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED_NODE, gpios);

LOG_MODULE_REGISTER(main, LOG_LEVEL_INF);

namespace {
    void turn_on_led() {
        const struct device *driver = DEVICE_DT_GET(DT_NODELABEL(our_driver0));
        struct sensor_value val;
        auto ret = sensor_sample_fetch(driver);
        LOG_INF("Channel ret: %d\n", ret);
    }

    void turn_off_led() {
        const struct device *driver = DEVICE_DT_GET(DT_NODELABEL(our_driver0));
        struct sensor_value val;
        auto ret = sensor_channel_get(driver, SENSOR_CHAN_AMBIENT_TEMP, &val);
        LOG_INF("Channel ret: %d\n", ret);
    }
}

int main(void) {
    uint32_t counter = 0;

    while (1) {
        // turn_on_led();
        // k_msleep(CONFIG_APP_HEARTBEAT_PERIOD_MS);

        // turn_off_led();
        // k_msleep(CONFIG_APP_HEARTBEAT_PERIOD_MS);

        toggle_led(&counter); // calling from our_driver.h interface, implemented in our_driver.c
        
        LOG_INF("counter: %d\n", counter);
        k_msleep(CONFIG_APP_HEARTBEAT_PERIOD_MS);
    }

    return 0;
}
