set(d9_component "")
set(esp_components "")

list(APPEND d9_component
    utility_d9_lib)

list(APPEND esp_components
    fatfs
    sdmmc)

idf_component_register(SRCS "ESP_IDF_LovyanGFX.cpp"
                    INCLUDE_DIRS "."
                    REQUIRES LovyanGFX "${d9_component}" "${esp_components}")
