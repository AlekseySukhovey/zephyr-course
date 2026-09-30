# Workspace map — 27 file(s)

A map, not a substitute for reading. Paths are workspace-relative. Use read_file (with
start_line/end_line) or search_files on these paths instead of re-listing directories.

(root)
  app.overlay — devicetree / Kconfig overlay
  CMakeLists.txt — build definition
  Kconfig — devicetree / Kconfig overlay
  prj.conf — Zephyr Kconfig for this app
.vscode/
  settings.json
boards/my_board/
  board.c
  board.cmake
  board.yml
  CMakeLists.txt — build definition
  Kconfig.my_board — devicetree / Kconfig overlay
  my_board.dts — devicetree / Kconfig overlay
  my_board.yaml
boards/our_board/
  board.cmake
  board.yml
  Kconfig.our_board — devicetree / Kconfig overlay
  our_board.dts — devicetree / Kconfig overlay
  our_board.yaml
drivers/our_driver/
  CMakeList.txt
  Kconfig — devicetree / Kconfig overlay
  our_driver.c
modules/calculator/
  CMakeLists.txt — build definition
modules/calculator/include/
  calculator.h — header
modules/calculator/src/
  calculator.c
modules/ring_buf/
  CMakeLists.txt — build definition
modules/ring_buf/include/
  ring_buf.h — header
modules/ring_buf/src/
  ring_buf.c
src/
  main.cpp — entry point
