package grains

import (
	"errors"
	"math"
)

func Square(input int) (uint64, error) {

	if input < 1 || input > 64 {
		return 0, errors.New("input must be between 1 and 64")
	}

	return uint64(math.Pow(2, float64(input-1))), nil

}

func Total() uint64 {
	return 18446744073709551615
}
