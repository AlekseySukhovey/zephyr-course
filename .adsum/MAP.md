# Workspace map — 23 file(s)

A map, not a substitute for reading. Paths are workspace-relative. Use read_file (with
start_line/end_line) or search_files on these paths instead of re-listing directories.

(root)
  .gitignore
  newfile.c
  README.md — doc
  west.yml — west manifest (SDK + modules)
app/
  CMakeLists.txt — build definition
  prj.conf — Zephyr Kconfig for this app
app/.vscode/
  settings.json
app/modules/calculator/
  CMakeLists.txt — build definition
app/modules/ring_buf/
  CMakeLists.txt — build definition
app/src/
  main.cpp — entry point
tests/calculator/
  CMakeLists.txt — build definition
  Kconfig — devicetree / Kconfig overlay
  prj.conf — Zephyr Kconfig for this app
  README.md — doc
  testcase.yaml
tests/calculator/src/
  test_basic.c
tests/ring_buf/
  CMakeLists.txt — build definition
  HOMEWORK.md — doc
  Kconfig — devicetree / Kconfig overlay
  prj.conf — Zephyr Kconfig for this app
  TEST_SPEC.md — doc
  testcase.yaml
tests/ring_buf/src/
  test_ring_buf.c
(walk stopped early: depth cap reached — use list_files for anything not listed)
