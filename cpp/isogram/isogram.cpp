#include <map>
#include <ctype.h>

#include "isogram.h"

using namespace std;

namespace isogram {

	bool is_isogram(string input_string){

		map<char, int> character_count;
		character_count.insert(pair<char, int>('a', 0));
		character_count.insert(pair<char, int>('b', 0));
		character_count.insert(pair<char, int>('c', 0));
		character_count.insert(pair<char, int>('d', 0));
		character_count.insert(pair<char, int>('e', 0));
		character_count.insert(pair<char, int>('f', 0));
		character_count.insert(pair<char, int>('g', 0));
		character_count.insert(pair<char, int>('h', 0));
		character_count.insert(pair<char, int>('i', 0));
		character_count.insert(pair<char, int>('j', 0));
		character_count.insert(pair<char, int>('k', 0));
		character_count.insert(pair<char, int>('l', 0));
		character_count.insert(pair<char, int>('m', 0));
		character_count.insert(pair<char, int>('n', 0));
		character_count.insert(pair<char, int>('o', 0));
		character_count.insert(pair<char, int>('p', 0));
		character_count.insert(pair<char, int>('q', 0));
		character_count.insert(pair<char, int>('r', 0));
		character_count.insert(pair<char, int>('s', 0));
		character_count.insert(pair<char, int>('t', 0));
		character_count.insert(pair<char, int>('u', 0));
		character_count.insert(pair<char, int>('v', 0));
		character_count.insert(pair<char, int>('w', 0));
		character_count.insert(pair<char, int>('x', 0));
		character_count.insert(pair<char, int>('y', 0));
		character_count.insert(pair<char, int>('z', 0));
		character_count.insert(pair<char, int>('_', 0));
		character_count.insert(pair<char, int>(' ', 0));


		for(long unsigned int i = 0; i < input_string.size(); i++){
			if( isalpha(input_string[i]) ){
				if(character_count[tolower(input_string[i])]++ > 0 ){
					return false;
				}
			}
		}

		return true;

	}

}  // namespace isogram

