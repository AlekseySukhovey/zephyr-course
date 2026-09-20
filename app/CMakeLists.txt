cmake_minimum_required(VERSION 3.20.0)

set(BOARD our_board)
# set(BOARD_FLASH_RUNNER jlink)


list(APPEND BOARD_ROOT ${CMAKE_CURRENT_SOURCE_DIR}) 
# find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

find_package(Zephyr REQUIRED)
project(my_zephyr_app)

target_sources(app PRIVATE src/main.cpp)
