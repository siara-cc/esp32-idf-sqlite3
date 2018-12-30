# SQLite3 library

# Overview

Create / access SQLite3 database files using this library through SPIFFS / SD Cards.

For more information, please see https://github.com/siara-cc/esp32_arduino_sqlite3_lib

# Installation

Install ESP-IDF sdk using instructions from https://docs.espressif.com/projects/esp-idf/en/latest/get-started/.

Unzip this project under esp-idf folder.

# Information specific to ESP-IDF

To check out how this library works, please try the examples given. For example, to check how Sqlite3 databases can be created on SPIFFS, naviate to the folder `examples/spiffs` and invoke `make flash`.

Many configurations specific to SQLite library have been set in the `sdkconfig` file, such as:

- Increasing stack size
- Setting SPIFFS partition information
- Partition size

The Flash size has been assumed as 4MB for SPIFFS example. Please change any of these configurations if necessary.

# Issues

If you face any issues, please contact the author (Arundale Ramanathan) at arun@siara.cc or create a github issue.

