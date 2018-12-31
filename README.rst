SQLite3 library
===============

Overview
--------

Create / access SQLite3 database files using this library through SPIFFS / SD Cards.

For more information, please see https://github.com/siara-cc/esp32_arduino_sqlite3_lib

Installation
------------

Install ESP-IDF sdk using instructions from https://docs.espressif.com/projects/esp-idf/en/latest/get-started/.

Unzip this project under esp-idf/components folder.  Or if you are cloning the repository at https://github.com/espressif/esp-idf, add this repository as submodule using:

`git submodule add https://github.com/siara-cc/esp32-idf-sqlite3 components/esp32-idf-sqlite3`.

Using examples
--------------

1. Download [esp-idf-v3.1.1.zip](https://github.com/espressif/esp-idf/releases/download/v3.1.1/esp-idf-v3.1.1.zip) that includes submodules and unzip
2. `cd esp-idf-v3.1.1`, set path to `xtensa-esp32-elf/bin` and set `IDF_PATH`
3. `git submodule add https://github.com/siara-cc/esp32-idf-sqlite3 components/esp32-idf-sqlite3`
4. `git submodule add https://github.com/siara-cc/esp32-idf-sqlite3-examples examples/esp32-idf-sqlite3-examples`
5. `cd examples/esp32-idf-sqlite3-examples/spiffs`
6. `make flash`
7. To check output, use `miniterm.py <device> 115200` and reset board

Information specific to ESP-IDF
-------------------------------

To check out how this library works, please try the examples using:

`git submodule add https://github.com/siara-cc/esp32-idf-sqlite3-examples examples/esp32-idf-sqlite3-examples`

For instance, to check how Sqlite3 databases can be created on SPIFFS, naviate to the folder `examples/esp32-idf-sqlite3-examples/spiffs` and invoke `make flash`.

Many configurations specific to SQLite library have been set in the `sdkconfig` file, such as:

- Increasing stack size
- Setting SPIFFS partition information
- Partition size

The Flash size has been assumed as 4MB for SPIFFS example. Please change any of these configurations if necessary.

Issues
------

If you face any issues, please contact the author (Arundale Ramanathan) at arun@siara.cc or create a github issue.
