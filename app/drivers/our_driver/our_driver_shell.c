#include <zephyr/shell/shell.h>
#include <zephyr/drivers/sensor.h>

static int cmd_read_handler(const struct shell *sh, size_t argc, char **argv)
{
    const struct device *dev = shell_device_get_binding(argv[1]);

    if (!dev)
    {
        shell_error(sh, "Couldn't find the device!");
        return -EFAULT;
    }

    struct sensor_value val;
    int ret = sensor_channel_get(dev, SENSOR_CHAN_AMBIENT_TEMP, &val);

    if (ret != 0)
    {
        shell_error(sh, "Couldn't read channel, got: %d", ret);
        return -EFAULT;
    }

    shell_info(sh, "%d", val.val1);

    return 0;
}

static int cmd_fetch_handler(const struct shell *sh, size_t argc, char **argv)
{
    const struct device *dev = shell_device_get_binding(argv[1]);

    if (!dev)
    {
        shell_error(sh, "Couldn't find the device!");
        return -EFAULT;
    }

    struct sensor_value val;
    int ret = sensor_sample_fetch(dev);

    if (ret != 0)
    {
        shell_error(sh, "Couldn't fetch channel, got: %d", ret);
        return -EFAULT;
    }

    shell_info(sh, "%d", val.val1);

    return 0;
}

static int cmd_info_handler(const struct shell *sh, size_t argc, char **argv)
{
    const struct device *dev = shell_device_get_binding(argv[1]);

    shell_info(sh, "Device name: %s", dev->name);

    if (!dev)
    {
        shell_error(sh, "Couldn't find the device!");
        return -EFAULT;
    }

    shell_info(sh, "Device Ready Status: %d", device_is_ready(dev));

    return 0;
}

/* Create subcommand array for demo command */
SHELL_STATIC_SUBCMD_SET_CREATE(our_driver_subcmd,
                               SHELL_CMD_ARG(read, NULL, "Get channel of our driver", cmd_read_handler, 2, 0),   // 1: mandatory parameter, 0: optional parameters
                               SHELL_CMD_ARG(fetch, NULL, "Get channel of our driver", cmd_fetch_handler, 2, 0), // 1: mandatory parameter, 0: optional parameters
                               SHELL_CMD_ARG(info, NULL, "Get channel of our driver", cmd_info_handler, 2, 0),   // 1: mandatory parameter, 0: optional parameters
                               SHELL_SUBCMD_SET_END);

/* Register root command demo with sub commands */
SHELL_CMD_REGISTER(sensor, &our_driver_subcmd, "Our driver help...", NULL);
