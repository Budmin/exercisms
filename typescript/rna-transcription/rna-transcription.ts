class Transcriptor {
  toRna( sequenceString: string ): string {

    return sequenceString.split('')
    .map(code => {
      switch(code){
        case('G'):
          return 'C';
        case('C'):
          return 'G';
        case('T'):
          return 'A';
        case('A'):
          return 'U';
        default:
          throw new Error('Invalid input DNA.');
      }
    })
    .join('');

  }
}

export default Transcriptor
