package space

import (
	"math"
)

type Planet string

func Age(seconds float64, planet Planet) float64 {
	var PlanetCalculations = map[Planet]float64{
		"Mercury": 0.2408467,
		"Venus":   0.61519726,
		"Earth":   1.0, // Earth years, 365.25 Earth days, or 31557600 seconds
		"Mars":    1.8808158,
		"Jupiter": 11.862615,
		"Saturn":  29.447498,
		"Uranus":  84.016846,
		"Neptune": 164.79132,
	}

	return math.Round((seconds/(31557600*PlanetCalculations[planet]))*100) / 100

}
