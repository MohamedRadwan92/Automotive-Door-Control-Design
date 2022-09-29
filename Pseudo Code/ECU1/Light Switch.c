

/************************************ Pseduo Code *************************************/

include "LightSwitch.h"

switch switchstate;

void LightSwitch (void * parameter){

    for( ; ; ){

        if (LightSwitch_On){
            switchstate = Switch_is_Pressed;
        }else{
            switchstate = Switch_is_Released;
        }
        vdelayuntil (20ms);
    }
}