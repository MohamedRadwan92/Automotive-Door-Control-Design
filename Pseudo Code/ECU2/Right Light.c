

/************************************ Pseduo Code *************************************/

include "RightLight.h"

RightLight RightLightStatus;


void RightLight (void * parameter){

    for( ; ; ){
        if ( Door_is_Open && Car_Moving){
            RightLightStatus = LeftLight_Off;
        }else if ( Car_Stop && Switch_is_Pressed ){
            RightLightStatus = LeftLight_On;
        }else if ( Door_is_Open && Car_Stop){
            RightLightStatus = LeftLight_On;
        }else if ( Car_Moving && Switch_is_Pressed){
            RightLightStatus = LeftLight_On;
        }else if ( Door_is_Closed && (RightLightStatus == RightLight_On) ){
            while ( !(timer not finished) );
                RightLightStatus = LeftLight_On;
        }
        vdelayuntil(10ms);
    }
}RightLightStatus