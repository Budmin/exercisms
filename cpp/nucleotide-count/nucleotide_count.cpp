#include "nucleotide_count.h"

#include <iostream>



namespace nucleotide_count {

    counter::counter(std::string input_string){
        counter::nucleotides = input_string; 
    }

    counter::nucleotide_counts(){
        std::map<char, int>output;

        output['A'] = 0;
        output['T'] = 0;
        output['C'] = 0;
        output['G'] = 0;

        for(int i = 0; i < nucleotides.length(); i++){
            output[ nucleotides[i] ]++;
        }

        return output;

    }

    // class counter{
    //     public:
    //         std::string nucleotides;
    //         counter(std::string input_string){
    //             nucleotides = input_string;
    //         }

    //         std::map<char, int>nucleotide_counts(){
    //             std::map<char, int>output;

    //             output['A'] = 0;
    //             output['T'] = 0;
    //             output['C'] = 0;
    //             output['G'] = 0;

    //             for(int i = 0; i < nucleotides.length(); i++){
    //                 output[ nucleotides[i] ]++;
    //             }

    //             return output;

    //         }


    // };

}  // namespace nucleotide_count


int main(void)
{

    // nucleotide_count::counter x("hey you");
    nucleotide_count::counter dna("AAAAGGGTTC");

    std::map<char, int>count = dna.nucleotide_counts();

    std::cout << "{ A: " << count['A'] << " }" << std::endl;
    std::cout << "{ T: " << count['T'] << " }" << std::endl;
    std::cout << "{ C: " << count['C'] << " }" << std::endl;
    std::cout << "{ G: " << count['G'] << " }" << std::endl;

    return 0;
}