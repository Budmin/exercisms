class Raindrops {
    convert(drops: number): string {
        let output = `${drops % 3 == 0 ? 'Pling' : ''}${drops % 5 == 0 ? 'Plang' : ''}${drops % 7 == 0 ? 'Plong' : ''}`;
        return output.length !== 0 ? output : drops.toString() ;
    }
  }
  
  export default Raindrops
  