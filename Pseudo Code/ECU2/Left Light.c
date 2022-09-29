

/************************************ Pseduo Code *************************************/

include "LeftLight.h"

LeftLight LeftLightStatus;

void LeftLight (void * parameter){

    for( ; ; ){
        if ( Door_is_Open && Car_Moving){
            LeftLightStatus = LeftLight_Off;
        }else if ( Car_Stop && Switch_is_Pressed ){
            LeftLightStatus = LeftLight_On;
        }else if ( Door_is_Open && Car_Stop){
            LeftLightStatus = LeftLight_On;
        }else if ( Car_Moving && Switch_is_Pressed){
            LeftLightStatus = LeftLight_On;
        }else if ( Door_is_Closed && (LeftLightStatus == LeftLight_On) ){
            while ( !(timer not finished) );
                LeftLightStatus = LeftLight_On;
        }
        vdelayuntil(10ms);
    }
}