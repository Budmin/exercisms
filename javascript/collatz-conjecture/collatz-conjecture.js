export const steps = (n) => {

  let output = 0;

  if(n < 1){
    throw new Error("Only positive numbers are allowed")
  }

  while(n != 1){

    if(n % 2 == 0){
      n /= 2;
    }
    else{
      n = 3 * n + 1;
    }

    output++;

  }

  return output;

};
