pub fn raindrops(n: u32) -> String {
    let mut output: String = String::from("");

    // Pling
    if n % 3 == 0 {
        output.push_str("Pling");
    }

    // Plang
    if n % 5 == 0 {
        output.push_str("Plang");
    }

    // Plong
    if n % 7 == 0 {
        output.push_str("Plong");
    }

    // number
    if output.is_empty() {
        output = n.to_string();
    }

    output
}
