//
// This is only a SKELETON file for the 'Bob' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

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
  if(message === message.toUpperCase()){
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
