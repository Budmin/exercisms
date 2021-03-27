#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <string>
#include <map>

namespace nucleotide_count {

    class counter
    {
        public:
            std::string nucleotides;
            counter(std::string);
            std::map<char, int>nucleotide_counts();
    };

}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H