class CollatzConjecture {
  static steps(num: number) {
    if(num <= 0){
      // throw errror
      throw new Error("Only positive numbers are allowed");
    }
    let output: number = 0;
    while(num != 1){
      output++;
      if(num % 2 == 0){
        num /= 2;
      }
      else{
        num = (3 * num) + 1;
      }
    }

    return output;
  }

}

export default CollatzConjecture
