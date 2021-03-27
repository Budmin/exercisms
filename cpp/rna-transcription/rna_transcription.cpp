#include "rna_transcription.h"


    // G -> C
    // C -> G
    // T -> A
    // A -> U


namespace rna_transcription {

    char to_rna(char input){
        switch(input){
            case('G'):
                return 'C';
            case('C'):
                return 'G';
            case('T'):
                return 'A';
            case('A'):
                return 'U';
            
            default:
                return 'U';
        }

    }



    std::string to_rna(std::string input){

        std::string output = "";

        for(long unsigned int i = 0; i < input.length(); i++){

            switch(input[i]){

                case('G'):
                    output += "C";
                    break;
                
                case('C'):
                    output += "G";
                    break;
                
                case('T'):
                    output += "A";
                    break;

                case('A'):
                    output += "U";
                    break;
            }

        }

        return output;

    }

}  // namespace rna_transcription
