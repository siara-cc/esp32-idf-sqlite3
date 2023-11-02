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

1. Download [esp-idf-v4.1.1.zip](https://github.com/espressif/esp-idf/releases/download/v4.1.1/esp-idf-v4.1.1.zip) that includes submodules and unzip
2. `cd esp-idf-v4.1.1`, install using `sudo ./install.sh`
3. `git submodule add https://github.com/siara-cc/esp32-idf-sqlite3 components/esp32-idf-sqlite3`
4. `git submodule add https://github.com/siara-cc/esp32-idf-sqlite3-examples examples/esp32-idf-sqlite3-examples`
5. `cd examples/esp32-idf-sqlite3-examples/spiffs`
6. `make flash`
7. To check output, use `miniterm.py <device> 115200` and reset board

Information specific to ESP-IDF
-------------------------------

To check out how this library works, please try the examples using:

`git submodule add https://github.com/siara-cc/esp32-idf-sqlite3-examples examples/esp32-idf-sqlite3-examples`

For instance, to check how Sqlite3 databases can be created on SPIFFS, navigate to the folder `examples/esp32-idf-sqlite3-examples/spiffs` and invoke `make flash`.

Many configurations specific to SQLite library have been set in the `sdkconfig.defaults` file, such as:

- Increasing stack size
- Setting SPIFFS partition information
- Partition size

The Flash size has been assumed as 4MB for SPIFFS example. Please change any of these configurations if necessary.

ESP-IDF Compatibility
---------------------
The user KikyTokamuro indicated in the `issues <https://github.com/siara-cc/esp32-idf-sqlite3/issues/18>`_ that you must do this changes for this component to work with **ESP-IDF v5.X.X**:

* In the file "esp32-idf-sqlite3/CMakeLists.txt" add 'spi_flash' to REQUIRES.

It was tested and work in **ESP-IDF v5.0.2-dirty** and **ESP-IDF v5.1.1-dirty**.

The ESP-IDF version is handled in private_include/esp_idf_compat.h

Without this changes this component should work with **ESP-IDF v4.X.X**.

The `examples <https://github.com/siara-cc/esp32-idf-sqlite3-examples/tree/master>`_ where tested with **ESP-IDF Visual Studio Code Extension v1.6.5**. For them to work I had to do some changes:

* In the file `main/CMakeLists.txt` the line `idf_build_component(esp32-idf-sqlite3)` must be commented.
* In the file `CMakeLists.txt` (in root)  the line `include($ENV{IDF_PATH}/tools/cmake/idf.cmake)` must be commented and  the line `include($ENV{IDF_PATH}/tools/cmake/project.cmake)` must be decomented.

For the case of `sd_spi <https://github.com/siara-cc/esp32-idf-sqlite3-examples/tree/master/sd_spi>`_ example I could not make it work because of changes between version 4.X.X and 5.X.X of ESP-IDF like changing sdspi_slot_config_t to sdspi_device_config_t, which changes the structure of the data.

Issues
------

If you face any issues, please contact the author (Arundale Ramanathan) at arun@siara.cc or create a github issue.
