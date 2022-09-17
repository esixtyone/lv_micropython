#define MICROPY_HW_BOARD_NAME               "ESP32S2 module"
#define MICROPY_HW_MCU_NAME                 "ESP32S2"

#define MICROPY_PY_BLUETOOTH                (0)
#define MICROPY_HW_ENABLE_SDCARD            (0)

#define MICROPY_HW_I2C0_SCL (9)
#define MICROPY_HW_I2C0_SDA (8)

#define MICROPY_HW_SPI0_MOSI (11)  // SDO
#define MICROPY_HW_SPI0_MISO (13)  // SDI
#define MICROPY_HW_SPI0_SCK (12)

// Enable UART REPL for modules that have an external USB-UART and don't use native USB.
#define MICROPY_HW_ENABLE_UART_REPL         (1)


// From Lemariva ESP32_CAM board def
#define MICROPY_PY_BLUETOOTH                (0)
#define MODULE_CAMERA_ENABLED               (1)

// The offset only has an effect if a board has psram
// it allows the start of the range allocated to
#define MICROPY_ALLOCATE_HEAP_USING_MALLOC (1)
#define MICROPY_HEAP_SIZE_REDUCTION (512 * 1024)