export default class Hamming{

    compute = (lhs: string, rhs: string): number => {
        if( lhs.length !== rhs.length ){
            throw new Error('DNA strands must be of equal length.');
        }

        return [...lhs].reduce( (acc: number, currentVal: string, index: number): number => {
            return acc + ( currentVal !== rhs[index] ? 1 : 0 );
        }, 0 );
    }
    
}