#include "nucleotide_count.h"


namespace nucleotide_count {

    counter::counter(std::string input_string){
        counter::nucleotides = input_string; 

        counter::valid_characters = "ATCG";

        counts['A'] = 0;
        counts['T'] = 0;
        counts['C'] = 0;
        counts['G'] = 0;

        for(long unsigned int i = 0; i < nucleotides.length(); i++){
            if(  valid_characters.find(nucleotides[i]) == std::string::npos  ){
                throw std::invalid_argument("invalid input");
            }
            else{
                counts[ nucleotides[i] ]++;
            }
        }


    }

    std::map<char, int> counter::nucleotide_counts() const{
        return counts;
    }

    int counter::count(char input) const{

        if( valid_characters.find(input) == std::string::npos ){
            throw std::invalid_argument("invalid input");
        }
        else{
            std::map<char, int>output = nucleotide_counts();
            return output[input];
        }

    }

}  // namespace nucleotide_count
