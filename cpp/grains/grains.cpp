#include "grains.h"


// 18446744073709551615ULL

namespace grains {


    long long unsigned int square(int number){

        if(number > 64 || number < 1){
            return -1;
        }

        return pow(2, number-1);
    }

    long long unsigned int total(){
        return 18446744073709551615ULL;
    }

}  // namespace grains
