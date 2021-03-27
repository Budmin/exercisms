#include "beer_song.h"


#include <stdio.h>

void recite(unsigned int start_bottles, unsigned int take_down, char *buffer){

    int i = 0;
    int current_bottle_count = start_bottles;
    
    char tmp[1024];

    for(i = 0; i < take_down; i++){

        sprintf(tmp, "%d", current_bottle_count);


        if(current_bottle_count > 0){

        strcat(buffer, tmp);
        strcat(buffer, " ");
        strcat(buffer, (current_bottle_count > 1) ? "bottles" : "bottle" );
        strcat(buffer, "of beer on the wall, ");

        }


        current_bottle_count--;

    }


    printf("%s\n", buffer);


}


int main(void){

    char response[1024];

    strcpy(response, "");

    recite(99, 1, response);

    return 0;
}

