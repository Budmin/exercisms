
export const valid = (inputString) => {

  // remove whitespace
  inputString = inputString.split(' ').join('').split('');

  // invalid if too short
  if(inputString.length <= 1){
    return false;
  }

  // if there's an invalid character, it'll catch
  try{
    let numbers = inputString.map(elem => parseInt(elem));
    let reversedNumbers = numbers.slice().reverse();

    let sum = reversedNumbers.reduce((total, current, index) => {
      if(index % 2 == 1){
        return total + (current * 2 < 9 ? current * 2 : current * 2 - 9);
      }
      else{
        return total + current;
      }

    }, 0);



    return sum % 10 == 0;

  }
  catch(error){
    return false;
  }
};

