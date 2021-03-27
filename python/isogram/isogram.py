def is_isogram(string):    
    letters = []

    for letter in string:
        letter = letter.lower()

        if letter.isalpha() and letter in letters:
            return False
        else:
            letters.append(letter)
    
    return True
