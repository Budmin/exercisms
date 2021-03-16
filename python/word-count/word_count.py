import re

def count_words(sentence):

    output = {}

    sentence = re.split(',| |\t|\n|_', sentence)

    for word in sentence:
        # remove excess stuff
        word = word.strip('\"')
        word = word.strip("\'")
        word = re.sub(r'[!&@$%^&,.:]','',word)




        if(word == ''):
            continue

        # to lower
        lowerWord = word.lower()

        if lowerWord in output:
            output[lowerWord] += 1
        else:
            output [lowerWord] = 1


    return output
