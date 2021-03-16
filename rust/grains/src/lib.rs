pub fn square(s: u32) -> u64 {

    match s{
        1..=64 => 2u64.pow(s - 1),
        _ => panic!("Square must be between 1 and 64")
    }

}

// this one confuses me. Is there a point to it?
// if there was a parameter for how many squares there were on the board that would make sense
// this just seems redundant in its current state
pub fn total() -> u64 {
    18_446_744_073_709_551_615
}
