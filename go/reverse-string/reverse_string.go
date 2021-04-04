package reverse

// reverses a string;
func Reverse(input string) string {

	splitInput := []rune(input)
	output := ""

	for i := len(splitInput) - 1; i >= 0; i-- {
		output += string(splitInput[i])
	}

	return output
}
