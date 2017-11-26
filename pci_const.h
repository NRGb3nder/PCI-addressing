typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

#define FILE_OUTPUT_OPTION "--file"
enum Error {E_INVALID_OPTION = 1, E_NO_ROOT_PRIVELEGES};

#define BUS_QUANTITY 256
#define DEVICE_QUANTITY 32
#define FUNCTION_QUANTITY 8

#define CONTROL_PORT 0x0CF8
#define DATA_PORT 0x0CFC

#define BUS_SHIFT 16
#define DEVICE_SHIFT 11
#define FUNCTION_SHIFT 8
#define REGISTER_SHIFT 2

#define DEVICEID_SHIFT 16
#define HEADER_TYPE_SHIFT 16
#define CLASS_CODE_SHIFT 8
#define BASE_CLASS_SHIFT 8
#define SUBCLASS_SHIFT 16
#define INTERRUPT_PIN_SHIFT 8
#define PRIMARY_BUS_NUMBER_SHIFT 0
#define SECONDARY_BUS_NUMBER_SHIFT 8
#define SUBORDINATE_BUS_NUMBER_SHIFT 16

#define ID_REGISTER 0
#define CLASS_CODE_REGISTER 2
#define HEADER_TYPE_REGISTER 3
#define INTERRUPT_PIN_REGISTER 15
#define INTERRUPT_LINE_REGISTER 15
#define BUS_NUMBER_REGISTER 7

#define INTERRUPT_LINES_NUMBER 16

#define PRIMARY_BUS_NUMBER "Primary bus number: #%X\n"
#define SECONDARY_BUS_NUMBER "Secondary bus number: #%X\n"
#define SUBORDINATE_BUS_NUMBER "Subordinate bus number: #%X\n"

#define NO_DEVICE 0xFFFFFFFF
