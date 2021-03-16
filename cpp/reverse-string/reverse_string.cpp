#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(std::string input_string){
        std::reverse(input_string.begin(), input_string.end());
        return input_string;
    }

}  // namespace reverse_string
