
#include "rna_transcription.h"


char *to_rna(const char *dna){

    int i = 0;
    int string_len = strlen(dna);

    char *output = malloc(sizeof(char) * string_len);

    for(i = 0; i < string_len; i++)
    {
        switch(dna[i]){
            case('G'):
                // C
                output[i] = 'C';
                break;
            case('C'):
                // G
                output[i] = 'G';
                break;
            case('T'):
                // A
                output[i] = 'A';
                break;
            case('A'):
                // U
                output[i] = 'U';
                break;
        }
    }


    return output;
}

