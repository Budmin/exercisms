#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>
#include <stdexcept>

namespace nucleotide_count {

    class counter
    {
        public:
            std::string nucleotides;
            std::map<char, int> counts;
            counter(std::string);
            std::map<char, int>nucleotide_counts() const;
            int count(char) const;

        private:
            std::string valid_characters;

    };

}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H