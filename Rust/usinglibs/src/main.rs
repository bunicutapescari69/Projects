use doom_2038::doom;//for some reson, every single function needs to be imported individually
use doom_2038::DOOM_TS;
use doom_2038::time_left;

//more info on ts on crates.io

fn main() {
    println!("{}", DOOM_TS);
    //doom(true); //ts infinite //these are voids
    //doom(false); //ts finite
    println!("{:?}", time_left()); //and these return numerical value
}
