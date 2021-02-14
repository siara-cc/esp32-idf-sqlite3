set(COMPONENT_SRCS "sqlite3.c esp32.c")
set(COMPONENT_ADD_INCLUDEDIRS "include")
idf_component_register(srcs "{$COMPONENT_SRCS}"
                       INCLUDE_DIRS "include"
                       PRIV_INCLUDE_DIRS "private_include"
                       REQUIRES mbedtls
                       PRIV_REQUIRES console spiffs)
