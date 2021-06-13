class Pangram{
	phrase: string;
	constructor(phrase: string){
		this.phrase = phrase;
	}

	isPangram(): boolean{
		let alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'];
		let lowerPhrase = this.phrase.toLowerCase();
		
		for(var char of alphabet){
			if( !lowerPhrase.includes(char) ){
				return false;
			}
		}
		return true;	
	}

}

export default Pangram