# Workspace map — 10 file(s)

A map, not a substitute for reading. Paths are workspace-relative. Use read_file (with
start_line/end_line) or search_files on these paths instead of re-listing directories.

(root)
  CMakeLists.txt — build definition
  prj.conf — Zephyr Kconfig for this app
.vscode/
  settings.json
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
