#include "binary.h"


int convert(const char *input){

    size_t i;

    int output = 0;

    for (i = 0; i < strlen(input); i++){

        output = output << 1;

        if( input[i] != '1' && input[i] != '0' ){
            return INVALID;
        }

        if( input[i] == '1' ){
            output += 1;
        }
        
    }

    return output;
}