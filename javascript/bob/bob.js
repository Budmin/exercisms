//
// This is only a SKELETON file for the 'Bob' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

// checks if a single-character string is a letter or not
function isAlpha(letter){
  return letter.toLowerCase() != letter.toUpperCase();
}

export const hey = (message) => {
  
  let output = 'Whatever.';
  let isShouting = false;
  let isQuestion = false;

  message = message.trim();

  // check for question
  if(message.slice(-1) === '?'){
    output = 'Sure.';
    isQuestion = true;
  }
  
  // check for shouting

  let alphabetOnly = message.split('').filter(letter => {return isAlpha(letter)}).join()

  if(alphabetOnly.length != 0 && alphabetOnly == alphabetOnly.toUpperCase()){
    output = 'Whoa, chill out!';
    isShouting = true;
  }
  
  
  // check for shouting question
  if(isShouting && isQuestion){
    output = "Calm down, I know what I'm doing!";
  }

  // check for nothing
  if(message === ''){
    output = 'Fine. Be that way!';
  }

  return output;

};

