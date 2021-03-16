//
// This is only a SKELETON file for the 'Resistor Color Duo' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

let colors = {

  black: 0,
  brown: 1,
  red: 2,
  orange: 3,
  yellow: 4,
  green: 5,
  blue: 6,
  violet: 7,
  grey: 8,
  white: 9

}

export const decodedValue = (inputColors) => {
  
  return Number(
    inputColors
    .slice(0, 2)
    .map(color => colors[color])
    .join("")
  );

};



