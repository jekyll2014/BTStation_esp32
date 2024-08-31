#pragma once
// команды
#define COMMAND_SET_MODE                 0x80
#define COMMAND_SET_TIME                 0x81
#define COMMAND_RESET_STATION            0x82
#define COMMAND_GET_STATUS               0x83
#define COMMAND_INIT_CHIP                0x84
#define COMMAND_GET_LAST_TEAMS           0x85
#define COMMAND_GET_TEAM_RECORD          0x86
#define COMMAND_READ_CARD_PAGE           0x87
#define COMMAND_UPDATE_TEAM_MASK         0x88
#define COMMAND_WRITE_CARD_PAGE          0x89
#define COMMAND_READ_FLASH               0x8a
#define COMMAND_WRITE_FLASH              0x8b
#define COMMAND_ERASE_FLASH_SECTOR       0x8c
#define COMMAND_GET_CONFIG               0x8d
#define COMMAND_SET_V_KOEFF              0x8e
#define COMMAND_SET_GAIN                 0x8f
#define COMMAND_SET_CHIP_TYPE            0x90
#define COMMAND_SET_TEAM_FLASH_SIZE      0x91
#define COMMAND_SET_FLASH_BLOCK_SIZE     0x92
#define COMMAND_SET_BT_NAME              0x93
#define COMMAND_SET_BT_PIN               0x94
#define COMMAND_SET_BATTERY_LIMIT        0x95
#define COMMAND_SCAN_TEAMS               0x96
#define COMMAND_GET_LAST_ERRORS          0x98
#define COMMAND_SET_AUTOREPORT           0x99

// размеры данных для команд
#define DATA_LENGTH_SET_MODE             1
#define DATA_LENGTH_SET_TIME             6
#define DATA_LENGTH_RESET_STATION        7
#define DATA_LENGTH_GET_STATUS           0
#define DATA_LENGTH_INIT_CHIP            4
#define DATA_LENGTH_GET_LAST_TEAMS       0
#define DATA_LENGTH_GET_TEAM_RECORD      2
#define DATA_LENGTH_READ_CARD_PAGE       2
#define DATA_LENGTH_UPDATE_TEAM_MASK     8
#define DATA_LENGTH_WRITE_CARD_PAGE      13
#define DATA_LENGTH_READ_FLASH           6
#define DATA_LENGTH_WRITE_FLASH          4  // and more according to data length
#define DATA_LENGTH_ERASE_FLASH_SECTOR   2
#define DATA_LENGTH_GET_CONFIG           0
#define DATA_LENGTH_SET_V_KOEFF          4
#define DATA_LENGTH_SET_GAIN             1
#define DATA_LENGTH_SET_CHIP_TYPE        1
#define DATA_LENGTH_SET_TEAM_FLASH_SIZE  2
#define DATA_LENGTH_SET_FLASH_BLOCK_SIZE 2
#define DATA_LENGTH_SET_BT_NAME          1
#define DATA_LENGTH_SET_BT_PIN           1
#define DATA_LENGTH_SET_BATTERY_LIMIT    4
#define DATA_LENGTH_SCAN_TEAMS           2
#define DATA_LENGTH_GET_LAST_ERRORS      0
#define DATA_LENGTH_SET_AUTOREPORT       1

// ответы станции
#define REPLY_SET_MODE                   0x90
#define REPLY_SET_TIME                   0x91
#define REPLY_RESET_STATION              0x92
#define REPLY_GET_STATUS                 0x93
#define REPLY_INIT_CHIP                  0x94
#define REPLY_GET_LAST_TEAMS             0x95
#define REPLY_GET_TEAM_RECORD            0x96
#define REPLY_READ_CARD_PAGE             0x97
#define REPLY_UPDATE_TEAM_MASK           0x98
#define REPLY_WRITE_CARD_PAGE            0x99
#define REPLY_READ_FLASH                 0x9a
#define REPLY_WRITE_FLASH                0x9b
#define REPLY_ERASE_FLASH_SECTOR         0x9c
#define REPLY_GET_CONFIG                 0x9d
#define REPLY_SET_V_KOEFF                0x9e
#define REPLY_SET_GAIN                   0x9f
#define REPLY_SET_CHIP_TYPE              0xa0
#define REPLY_SET_TEAM_FLASH_SIZE        0xa1
#define REPLY_SET_FLASH_BLOCK_SIZE       0xa2
#define REPLY_SET_BT_NAME                0xa3
#define REPLY_SET_BT_PIN                 0xa4
#define REPLY_SET_BATTERY_LIMIT          0xa5
#define REPLY_SCAN_TEAMS                 0xa6
#define REPLY_GET_LAST_ERRORS            0xa8
#define REPLY_SET_AUTOREPORT             0xa9

// режимы станции
#define MODE_INIT                        0
#define MODE_START_KP                    1
#define MODE_FINISH_KP                   2

// режимы отправки отчета о новом скане в BT
#define AUTOREPORT_OFF                   0
#define AUTOREPORT_ON                    1

// коды ошибок ответов станции
#define OK                               0
#define WRONG_STATION                    1
#define RFID_READ_ERROR                  2
#define RFID_WRITE_ERROR                 3
#define LOW_INIT_TIME                    4
#define WRONG_CHIP                       5
#define NO_CHIP                          6
#define BUFFER_OVERFLOW                  7
#define WRONG_DATA                       8
#define WRONG_UID                        9
#define WRONG_TEAM                       10
#define NO_DATA                          11
#define WRONG_COMMAND                    12
#define ERASE_ERROR                      13
#define WRONG_CHIP_TYPE                  14
#define WRONG_MODE                       15
#define WRONG_SIZE                       16
#define WRONG_FW_VERSION                 17
#define WRONG_PACKET_LENGTH              18
#define FLASH_READ_ERROR                 19
#define FLASH_WRITE_ERROR                20
#define EEPROM_READ_ERROR                21
#define EEPROM_WRITE_ERROR               22
#define BT_ERROR                         23
#define PARSE_PACKET_LENGTH_ERROR        24