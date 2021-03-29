

def abbreviate(words):

    return  "".join(
        map( 
            
            lambda word: word[0] if word[0].isalpha() else '' , 
            
            words.replace('-', ' ').replace('_', '').split()

        )
    ).upper()



