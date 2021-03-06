package scrabble

import "strings"

// Letter                           Value
// A, E, I, O, U, L, N, R, S, T       1
// D, G                               2
// B, C, M, P                         3
// F, H, V, W, Y                      4
// K                                  5
// J, X                               8
// Q, Z                               10

var scores = map[string]int{
	"a": 1,
	"e": 1,
	"i": 1,
	"o": 1,
	"u": 1,
	"l": 1,
	"n": 1,
	"r": 1,
	"s": 1,
	"t": 1,
	"d": 2,
	"g": 2,
	"b": 3,
	"c": 3,
	"m": 3,
	"p": 3,
	"f": 4,
	"h": 4,
	"v": 4,
	"w": 4,
	"y": 4,
	"k": 5,
	"j": 8,
	"x": 8,
	"q": 10,
	"z": 10,
}

func Score(input string) int {

	input = strings.ToLower(input)

	var output int = 0

	var characters = []rune(input)

	for i := 0; i < len(characters); i++ {
		output += scores[string(characters[i])]
	}

	return output
}
