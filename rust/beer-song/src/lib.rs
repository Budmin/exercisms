pub fn verse(n: u32) -> String {

    let mut output: String = String::new();

    if n == 0{
        // 0 song
        output.push_str("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n");
    }

    else if n == 1{
        // 1 verse
        output.push_str("1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it around, no more bottles of beer on the wall.\n");
    }

    else if n == 2{
        output.push_str(&n.to_string());
        output.push_str(" bottles of beer on the wall, ");
        output.push_str(&n.to_string());
        output.push_str(" bottles of beer.\nTake one down and pass it around, ");
        output.push_str(&(n-1).to_string());
        output.push_str(" bottle of beer on the wall.\n");
    }

    else{
        // regular verse
        output.push_str(&n.to_string());
        output.push_str(" bottles of beer on the wall, ");
        output.push_str(&n.to_string());
        output.push_str(" bottles of beer.\nTake one down and pass it around, ");
        output.push_str(&(n-1).to_string());
        output.push_str(" bottles of beer on the wall.\n");
    }

    output
}

pub fn sing(start: u32, end: u32) -> String {
    
    let mut output: String = String::new();

    let mut i: u32 = start;

    while i >= end{
        output.push_str(&verse(i));
        if i != end{
            output.push_str("\n");
        }
        if i != 0{
            i -= 1;
        }
        else{
            break;
        }
    }


    output

}

