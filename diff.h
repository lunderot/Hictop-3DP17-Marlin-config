#define BAUDRATE 115200		//Hictop
  #define MOTHERBOARD BOARD_RAMPS_13_EFB		//Hictop
#define CUSTOM_MACHINE_NAME "Hictop"		//Hictop
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75		//Hictop
#define TEMP_SENSOR_0 3		//Hictop
#define TEMP_SENSOR_BED 3	//Hictop
  #define DEFAULT_Kp 15.00 //Hictop
  #define DEFAULT_Ki 0.72 //Hictop
  #define DEFAULT_Kd 78.03 //Hictop
#define X_MIN_ENDSTOP_INVERTING true // Set to true to invert the logic of the endstop. //Hictop
#define Y_MIN_ENDSTOP_INVERTING true // Set to true to invert the logic of the endstop. //Hictop
#define Z_MIN_ENDSTOP_INVERTING true // Set to true to invert the logic of the endstop. //Hictop
#define X_MAX_ENDSTOP_INVERTING true // Set to true to invert the logic of the endstop. //Hictop
#define Y_MAX_ENDSTOP_INVERTING true // Set to true to invert the logic of the endstop. //Hictop
#define Z_MAX_ENDSTOP_INVERTING true // Set to true to invert the logic of the endstop. //Hictop
#define Z_MIN_PROBE_ENDSTOP_INVERTING true // Set to true to invert the logic of the probe. //Hictop
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 398, 94.4962144} //Hictop
//#define FIX_MOUNTED_PROBE //Hictop
#define INVERT_Y_DIR false //Hictop
#define X_BED_SIZE 210 //Hictop
#define Y_BED_SIZE 270 //Hictop
#define Z_MAX_POS 180 //Hictop
//#define FILAMENT_RUNOUT_SENSOR //Hictop
//#define AUTO_BED_LEVELING_LINEAR //Hictop
#define EEPROM_SETTINGS     // Persistent storage with M500 and M501 //Hictop
#define NOZZLE_PARK_FEATURE //Hictop
  #define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MIN_POS + 10), 20 } //Hictop
#define SDSUPPORT //Hictop
#define SPI_SPEED SPI_EIGHTH_SPEED //Hictop
#define ENCODER_PULSES_PER_STEP 4 //Hictop
#define ENCODER_STEPS_PER_MENU_ITEM 1 //Hictop
#define REPRAP_DISCOUNT_SMART_CONTROLLER //Hictop
