#include "resistor_color.h"

int color_code(resistor_band_t color_name){
    return color_name;
}

// returns the color values?
int *colors(void){

    static int output [] = {
      BLACK, BROWN, RED, ORANGE, YELLOW,
      GREEN, BLUE, VIOLET, GREY, WHITE
   };

    return output;

}
