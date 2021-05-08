pub fn verse(n: u32) -> String {
    match n {
        1 => String::from("1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it around, no more bottles of beer on the wall.\n"),
        0 => String::from("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n"),
        n => {
            format!(
                "{} bottles of beer on the wall, {} bottles of beer.\nTake one down and pass it around, {} bottle{} of beer on the wall.\n", 
                n.to_string(),
                n.to_string(),
                (n - 1).to_string(),
                if n - 1 <= 1 {""} else {"s"}
            )
        },
    }
}

pub fn sing(start: u32, end: u32) -> String {
    (end..=start)
        .rev()
        .map(|i| verse(i))
        .collect::<Vec<String>>()
        .join("\n")
}
