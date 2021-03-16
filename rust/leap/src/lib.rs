pub fn is_leap_year(year: u64) -> bool {
    let mut output: bool = false;

    if year % 400 == 0 {
        output = true;
    } else if year % 100 == 0 {
        output = false;
    } else if year % 4 == 0 {
        output = true;
    }

    output
}
