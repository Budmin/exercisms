//
// This is only a SKELETON file for the 'Matrix' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export class Matrix {
// class Matrix{
  constructor(inputString) {

    this.matrix = (inputString.split('\n').map(elem => {
      return elem.split(' ').map(num => {
        return parseInt(num);
      });
    }));

  }

  get rows() {
    return this.matrix
  }

  get columns() {

    let output = []

    for(let i = 0; i < this.matrix[0].length; i++){
      output.push([]);

      for(let j = 0; j < this.matrix.length; j++){
        output[i].push( this.matrix[j][i] )
      }

    }

    return output;
  }
}

