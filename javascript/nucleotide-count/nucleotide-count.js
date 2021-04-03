
export class NucleotideCounts {
  static parse(strand) {
    let counts = {
      'A': 0,
      'C': 0,
      'G': 0,
      'T': 0
    }

    let keyArray = Object.keys(counts);

    strand.split('').forEach(elem => {
      if(!keyArray.includes(elem)){
        throw new Error('Invalid nucleotide in strand');
      }
      counts[elem] += 1;
    });

    return `${counts['A']} ${counts['C']} ${counts['G']} ${counts['T']}`;
    
  }
}
