pub fn sum_of_multiples(limit: u32, factors: &[u32]) -> u32 {
    (1..limit)
    .filter(
        |i|  {
            for j in 0..factors.len(){
                // no divide by zero errors
                if factors[j] == 0 {
                    return false;
                }
                if i % factors[j] == 0{
                    return true;
                }
            }
            return false;
        } 
    )
    .fold(
        0,
        |acc, val| acc + val
    )
}
