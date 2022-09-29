

/************************************ Pseduo Code *************************************/

include "DoorState.h"

Door DoorState ;  // variable declared in typedef file

void DoorState (void * parameter){
    for( ; ; ){
    if( DoorSensor_On){
        doorstate = door_is_open;
    }else{
        doorstate = door_is_closed;
    }
    vdelayuntil(10ms);
    }
}