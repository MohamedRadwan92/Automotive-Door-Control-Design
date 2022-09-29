#include <stdio.h>
#include <stdlib.h>


/* common typedef for both ECUs */

typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short uint16;
typedef signed short sint16;
typedef unsigned long uint32;
typedef signed long sint32;
typedef unsigned long long uint64;
typedef signed long long sint64;


/********************************* These typedef for ECU1 *****************************************/

/************************************ Application Layer *******************************************/

typedef enum{
    Door_is_Closed
    Door_is_Open;
}Door;

typedef enum{
    Switch_is_Released;
    Switch_is_Pressed;
}Switch;

typedef enum{
    Car_Stop;
    Car_Moving;
}Speed;

/******************************** Hardware Abstraction Layer ******************************************/

typedef enum{
    DoorSensor_On;
    DoorSensor_Off;
}DoorSensor;

typedef enum{
    LightSwitch_On;
    LightSwitch_Off;
}LightSwitch;

typedef enum{
    SpeedSensor_On;
    SpeedSensor_Off;
}SpeedSensor;

/********************************* These typedef for ECU2 *****************************************/

/************************************ Application Layer *******************************************/

typedef enum {
    Buzzer_Off;
    Buzzer_On;
}Buzzer;

typedef enum {
    LeftLight_Off;
    LeftLight_On;
}LeftLight;

typedef enum {
    RightLight_Off;
    RightLight_On;
}RightLight;

/******************************** Hardware Abstraction Layer ******************************************/

typedef enum {
    BuzzerDevice_Off;
    BuzzerDevice_On;
}BuzzerDevice;

typedef enum {
    LeftLightLamp_Off;
    LeftLightLamp_On;
}LeftLightLamp;

typedef enum {
    RightLightLamp_Off;
    RightLightLamp_On;
}RightLightLamp;

/***************************** Type Definition for Both ECUs ****************************************/

typedef enum{
    PIN_IS_LOW;
    PIN_IS_HIGH;
}Pin;

typedef enum{
    Port0;
    Port1;
}Port;

typedef enum{
    PIN0;
    PIN1;
    PIN2;
    PIN3;
    PIN4;
    PIN5;
    PIN6;
    PIN7;
}PinNo;

typedef enum{
    pdFalse;
    pdTrue;
}CANStatus;
