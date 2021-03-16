def is_pangram(sentence):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    sentence = sentence.lower()

    for letter in alphabet:
        if not letter in sentence:
            return False

    return True
