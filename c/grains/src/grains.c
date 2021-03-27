#include "grains.h"


uint64_t square(uint8_t index){
    
    return (index < 1 || index > 65) ? 0 : pow(2, index - 1);

}

uint64_t total(void){
    return 18446744073709551615ull;
}
