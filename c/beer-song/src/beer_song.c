#include <stdio.h>
#include <string.h>
#include "beer_song.h"


void recite(unsigned int start_bottles, unsigned int take_down, char *buffer){

    int num_of_bottles = start_bottles;
    int num_of_loops = take_down;

    strcpy(buffer, "");

    char swp_buffer[32];

    for( num_of_bottles = num_of_bottles, num_of_loops = num_of_loops; num_of_loops > 0; num_of_bottles--, num_of_loops-- ){

        if(num_of_bottles == 0){
            strcat(buffer, "No more bottles of beer on the wall, no more bottles of beer.\n");
            strcat(buffer, "Go to the store and buy some more, 99 bottles of beer on the wall.\n");
        }

        else if (num_of_bottles == 1){
            strcat(buffer, "1 bottle of beer on the wall, 1 bottle of beer.\n");
            strcat(buffer, "Take it down and pass it around, no more bottles of beer on the wall.\n");            
        }

        else{
            sprintf(swp_buffer, "%d", num_of_bottles);

            strcat(buffer, swp_buffer);
            strcat(buffer, " bottles of beer on the wall, ");
            strcat(buffer, swp_buffer);
            strcat(buffer, " bottles of beer.\n");

            sprintf(swp_buffer, "%d", num_of_bottles - 1);

            strcat(buffer, "Take one down and pass it around, ");
            strcat(buffer, swp_buffer);

            strcat(buffer, " bottle");

            if( (num_of_bottles - 1) != 1){
                strcat(buffer, "s");
            }

            strcat(buffer, " of beer on the wall.\n");

        }

        if(num_of_loops != 1){
            strcat(buffer, "\n");
        }

    }

}