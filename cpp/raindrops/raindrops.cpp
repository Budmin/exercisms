#include "raindrops.h"

namespace raindrops {

    std::string convert(int number){

        std::string output = "";

        if(number % 3 == 0){
            output += "Pling";
        }

        if(number % 5 == 0){
            output += "Plang";
        }

        if(number % 7 == 0){
            output += "Plong";
        }

        if(output == ""){
            output += std::to_string(number);
        }

        return output;

    }

}  // namespace raindrops
