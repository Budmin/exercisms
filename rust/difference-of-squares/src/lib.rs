pub fn square_of_sum(n: u32) -> u32 {
    let output: u32 = (1..=n).sum();
    output * output
}

pub fn sum_of_squares(n: u32) -> u32 {
    (1..=n).fold(0, |acc, i|  acc + i * i)
}

pub fn difference(n: u32) -> u32 {
    square_of_sum(n) - sum_of_squares(n)
}
