#include "bob.h"

// Bob answers 'Sure.' if you ask him a question, such as "How are you?".

// He answers 'Whoa, chill out!' if you YELL AT HIM (in all capitals).

// He answers 'Calm down, I know what I'm doing!' if you yell a question at him.

// He says 'Fine. Be that way!' if you address him without actually saying anything.

// He answers 'Whatever.' to anything else.

namespace bob {

	bool contains_alpha(std::string input){

		for(long unsigned int i = 0; i < input.length(); i++){
			if(isalpha(input[i])){
				return true;
			}
		}

		return false;

	}


	std::string hey(std::string input){

		std::string output = "Whatever.";
		bool is_question = false;
		bool is_shouting = false;


		// used when checking for shouting
		std::string uppercase_copy = input;
		transform(
			uppercase_copy.begin(), 
			uppercase_copy.end(), 
			uppercase_copy.begin(), 
			::toupper
		);


		// checking for nothing
		if(input == ""){
			return "Fine. Be that way!";
		}
		
		// check for shouting
		// NOTE: probably more effient to use a filter() like function 
		// if one exists in C++
		if(input == uppercase_copy && contains_alpha(input)){
			output = "Whoa, chill out!";
			is_shouting = true;
		}

		// check for question mark
		if(input.substr( input.length() - 1 , 1) == "?"){
			output = "Sure.";
			is_question = true;
		}

		// check for shouting question
		if(is_question && is_shouting){
			output = "Calm down, I know what I'm doing!";
		}

		return output;
	}

}  // namespace bob
