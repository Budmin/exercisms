export const transform = (old) => {

  let output = {};

  for (let num in old ){
    old[num].forEach(letter => {
      output[ letter.toLowerCase() ] = Number(num);
    })
  }

  return output;

};
