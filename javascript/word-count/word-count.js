// not really happy with this, but I need better regex understanding to improve this
export const countWords = (phrase) => {

  let output = {};


  let words = phrase.split(/[\s,]+/);

  words.forEach((word) => {

    if(word == ''){
      return;
    }

    word = word.toLowerCase().replace(/[.,\/#!@$%\^&\*;:{}=\-_`~()]/g,"").trim("'");
    word = word.replace(/^'/, '');
    word = word.replace(/'$/, '');




    if(word in output){
      output[word]++;
    }
    else{
      output[word] = 1;
    }
  });


  return output;

};
