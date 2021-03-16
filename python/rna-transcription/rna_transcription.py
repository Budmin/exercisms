
def transcribe(character):
    if character == 'C':
        return 'G'
    elif character == 'G':
        return 'C'
    elif character == 'T':
        return 'A'
    elif character == 'A':
        return 'U'

def to_rna(dna_strand):
    
    return( ''.join(map(transcribe, dna_strand)) )

    
