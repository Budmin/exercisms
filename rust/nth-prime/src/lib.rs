pub fn is_prime(n: u32) -> bool {
    for i in 2..n {
        if n % i == 0 {
            return false;
        }
    }

    true
}

pub fn nth(n: u32) -> u32 {
    let mut prime_numbers: Vec<u32> = Vec::new();

    let mut next_num: u32 = 2;

    while prime_numbers.len() <= n as usize {
        if is_prime(next_num) {
            prime_numbers.push(next_num);
        }

        next_num += 1;
    }

    *prime_numbers.last().unwrap()
}
