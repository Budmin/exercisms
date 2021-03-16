

let planetCalculations = {
  mercury: 0.2408467,
  venus: 0.61519726,
  earth: 1.0, // Earth years, 365.25 Earth days, or 31557600 seconds
  mars: 1.8808158,
  jupiter: 11.862615,
  saturn: 29.447498,
  uranus: 84.016846,
  neptune: 164.79132

}


export const age = (planetName, ageInSeconds) => {

  // the 31557600 is an earth year in seconds
  let years = Math.round( ( ageInSeconds / (31557600 * planetCalculations[planetName]) ) * 100 ) / 100;

  return years;

};
