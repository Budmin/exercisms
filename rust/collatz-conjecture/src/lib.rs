pub fn collatz(n: u64) -> Option<u64> {
    // error handling
    match n == 0 {
        true => None,
        false => {
            let mut out: u64 = 0;
            let mut num = n;

            while num != 1 {
                out += 1;
                num = match num % 2 {
                    0 => num / 2,
                    _ => 3 * num + 1,
                }
            }

            Some(out)
        }
    }
}
