if (CONFIG_OUR_DRIVER)
    target_sources(app PRIVATE our_driver.c)

    if (CONFIG_SHELL)
        target_sources(app PRIVATE our_driver_shell.c our_driver_task2.h)
    endif ()
endif ()