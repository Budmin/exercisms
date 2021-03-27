#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H

#include <string>

namespace rna_transcription {

    // for single character
    char to_rna(char);
    // for multiple character
    std::string to_rna(std::string);

}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H