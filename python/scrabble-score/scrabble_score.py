
# Letter                           Value
# A, E, I, O, U, L, N, R, S, T       1
# D, G                               2
# B, C, M, P                         3
# F, H, V, W, Y                      4
# K                                  5
# J, X                               8
# Q, Z                               10

score_system = {
    ('a', 'e', 'i', 'o', 'u', 'l', 'n', 'r', 's', 't'): 1,
    ('d', 'g'): 2,
    ('b', 'c', 'm', 'p'): 3,
    ('f', 'h', 'v', 'w', 'y'): 4,
    ('k'): 5,
    ('j', 'x'): 8,
    ('q', 'z'): 10
}

def score(word):
    word = word.lower()

    output = 0

    for letter in word:
        for system in score_system.items():
            if(letter in system[0]):
                output += system[1]
                continue


    return output

