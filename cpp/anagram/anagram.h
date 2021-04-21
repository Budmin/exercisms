#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

namespace anagram {

	class anagram
	{
		public:
			anagram(std::string);
			std::vector<std::string>matches(std::vector<std::string>);
			std::string main_string;
			bool is_anagram(std::string);

	};

}  // namespace anagram

#endif // ANAGRAM_H