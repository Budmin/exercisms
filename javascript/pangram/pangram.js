
export const isPangram = (inputString) => {


  let letterArray = [
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 
    'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 
    'q', 'r', 's', 
    't', 'u', 'v', 
    'w', 'x', 
    'y', 'z'
  ];
  
  inputString.toLowerCase().split('').forEach(letter => {

    let letterIndex = letterArray.indexOf(letter);
    if(letterIndex !== -1){
      letterArray.splice( letterArray.indexOf(letter), 1);
    }
  });

  return (letterArray.length === 0);

};

