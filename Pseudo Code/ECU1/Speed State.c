
/************************************ Pseduo Code *************************************/

include "SpeedState.h"

speed SpeedState;

void SpeedState (void * parameter){

    for( ; ; ){

        if (SpeedSensor_On){
            SpeedState = Car_Moving
        }else{
            SpeedState = Car_Stop;
        }
        vdelayuntil (5ms);
    }
}