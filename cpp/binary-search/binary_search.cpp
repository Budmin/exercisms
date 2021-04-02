#include "binary_search.h"



namespace binary_search {

    std::size_t find(std::vector<int> list, int target_value){

        if(list.size() == 0){
            throw std::domain_error("List is empty");
        }

        int min_index = 0;
        int max_index = list.size() - 1;

        int midpoint =  (min_index + max_index) / 2;

        while(min_index <= max_index)
        {
            midpoint =  (min_index + max_index) / 2;

            if(list[midpoint] == target_value){
                return midpoint;
            }

            else if(list[midpoint] < target_value)
            {
                min_index = midpoint + 1;
            }

            else{
                max_index = midpoint - 1;
            }

        }

        throw std::domain_error("Target not found");

    }


}  // namespace binary_search
