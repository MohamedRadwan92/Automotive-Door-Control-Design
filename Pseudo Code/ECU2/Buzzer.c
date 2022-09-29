

/************************************ Pseduo Code *************************************/

include "Buzzer.h"

Buzzer BuzzerStatus;

void Buzzer (void * parameter){

    for( ; ; ){

        if ( Door_is_Open && Car_Moving){
            BuzzerStatus = Buzzer_On;
        }else if ( Car_Stop && Switch_is_Pressed ){
            BuzzerStatus = Buzzer_On;
        }else if ( Door_is_Open && Car_Stop){
            BuzzerStatus = Buzzer_Off;
        }else if ( Car_Moving && Switch_is_Pressed){
            BuzzerStatus = Buzzer_Off;
        }
        vdelayuntil (5ms);
    }
}