#include "hamming.h"

#include <iostream>

namespace hamming {

    int compute(std::string sequence_one, std::string sequence_two){

        int output = 0;

        // both sequences must be the same length
        if(sequence_one.length() != sequence_two.length()){
            throw std::domain_error("The sequences must be the same length!");
        }

        for(long unsigned int i = 0; i < sequence_one.length(); i++){
            if(sequence_one[i] != sequence_two[i]){
                output++;
            }
        }

        return output;
    }

}  // namespace hamming

