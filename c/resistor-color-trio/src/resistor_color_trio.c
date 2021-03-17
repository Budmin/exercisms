#include "resistor_color_trio.h"

#include <stdio.h>
#include <math.h>

resistor_value_t color_code(resistor_band_t * colors){

    resistor_value_t output;

    int third_value = pow(10, colors[2]);


    output.value = (colors[0] * 10 + colors[1]) * ((third_value) != 0 ? third_value : 1 );

    output.unit = (output.value > 1000);

    if(output.value >= 1000)
    {
        output.value /= 1000;
        output.unit = 1;
    }
    else{
        output.unit = 0;
    }

    return output;
}


