
use std::iter::once;

pub fn build_proverb(list: &[&str]) -> String {
    if list.len() == 0{
        return String::new();
    }

    list.windows(2)
    .map(|window| format!("For want of a {} the {} was lost.\n", window[0], window[1]) )
    .chain( once(format!("And all for the want of a {}.", list[0])) )
    .collect()
}
