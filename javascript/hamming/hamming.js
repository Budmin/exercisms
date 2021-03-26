export const compute = (leftStrand, rightStrand) => {
  
  // handling errors
  if(leftStrand.length === 0 && rightStrand.length !== 0){
    throw new Error('left strand must not be empty')
  }

  if(rightStrand.length === 0 && leftStrand.length !== 0){
    throw new Error('right strand must not be empty')
  }

  if(leftStrand.length !== rightStrand.length){
    throw new Error('left and right strands must be of equal length')
  }


  return [...leftStrand].reduce((total, currentValue, index) => {
    return  total + ((currentValue !== rightStrand[index]) ? 1 : 0);
  }, 0);

};
