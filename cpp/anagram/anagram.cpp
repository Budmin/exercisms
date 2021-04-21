#include "anagram.h"

namespace anagram {

	anagram::anagram(std::string input){
		anagram::main_string = input;
	}

	bool anagram::is_anagram(std::string candidate){

		std::string main_string_copy = main_string;
		std::string candidate_copy = candidate;

		// lower case
		std::transform(
			main_string_copy.begin(), 
			main_string_copy.end(), 
			main_string_copy.begin(), 
			[](unsigned char c){ return std::tolower(c); }
		);
		std::transform(
			candidate_copy.begin(), 
			candidate_copy.end(), 
			candidate_copy.begin(), 
			[](unsigned char c){ return std::tolower(c); }
		);



		if(candidate == ""){

		}

		return true;
	}

	std::vector<std::string> anagram::matches(std::vector<std::string> candidates){

		std::vector<std::string> output;

		for(std::string candidate : candidates){

			// find if it's an anagram
			if(is_anagram(candidate)){
				output.push_back(candidate);
			}

		}

		return output;
	}


}  // namespace anagram
