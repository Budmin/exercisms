def encode(plain_text):

    output = ''

    for letter in plain_text:
        if letter.isalpha():
            output +=  str( ((ord(letter) - 96) + 23 ) % 26)
            output += ' '
            # output +=  chr((((ord(letter) - 96) + 26 ) % 26) + 96) 

    return output


def decode(ciphered_text):
    pass
