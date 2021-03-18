#include <stdio.h>
#include "darts.h"


uint8_t score(coordinate_t position){

    float distance_to_center = sqrt( (position[0] * position[0]) + (position[1] * position[1]) );

    uint8_t output = 0;

    // inner circle
    if(distance_to_center <= 1){
        output = 10;
    }
    // middle circle
    else if(distance_to_center <= 5){
        output = 5;
    }
    else if(distance_to_center <= 10){
        output = 1;
    }

    return output;

}

