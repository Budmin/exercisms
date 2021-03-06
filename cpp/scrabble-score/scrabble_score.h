#if !defined(SCRABBLE_SCORE_H)
#define SCRABBLE_SCORE_H

#include <string>
#include <map>
#include <boost/algorithm/string.hpp>


namespace scrabble_score {

    int score(std::string word);

}  // namespace scrabble_score

#endif // SCRABBLE_SCORE_H