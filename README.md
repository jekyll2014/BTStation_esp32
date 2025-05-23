RFID-enabled device for marking the NTAG21x chips for the orienteering competitions.
Refactored to run on the original ESP32 (incompatible with ESP32-C3/-S2/-S3/C6 and others) using DS3231 for the RTC clock module and MFRC522 for the RFID interface.
Based on a https://github.com/jekyll2014/BTStation

Bluetooth PIN is not available out-of-the-box for ESP32 but there are some hints how to enable it:
https://github.com/espressif/arduino-esp32/issues/4566
https://github.com/espressif/arduino-esp32/issues/9599
https://github.com/espressif/arduino-esp32/tree/master/libraries/BluetoothSerial#legacy-pairing-idf-component
https://espressif-docs.readthedocs-hosted.com/projects/arduino-esp32/en/latest/esp-idf_component.html

ToDo:
1) Optimize the workflow considering the available memory amount.
2) Consider the energy consumption optimization.
