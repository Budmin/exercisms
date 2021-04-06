package strand

func ToRNA(dna string) string {

	output := ""

	for i := 0; i < len(dna); i++{
		switch dna[i] {

		case 65:
			output += "U"
		case 67:
			output += "G"
		case 71:
			output += "C"
		case 84:
			output += "A"

		}
	}


	return output
}

