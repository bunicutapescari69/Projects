use std::io;//importing input output library
fn main() {
    println!("FUCK NIGGERS FUCK NIGGERS FUCK NIGGERSS");//how to print

    //inputting::
    let mut a = String::new(); // !! AT FIRST, WHEN INPUTTING TO A VARIABLE, WE GOTTA MAKE IT A STRING TO STORE THE INPUT !!
    //let mut a: u8 = a.trim().parse().expect("Please type a valid number!"); //simpler but this will crash if not a number

    //now were gonna overshadow and convert a into u8
    let a: u8 = loop { //doing ts until the break, basically a death while
        a.clear(); //clear the string before reusing
        println!("Please enter a number:");
        io::stdin().read_line(&mut a).expect("Failed to read line"); //read input into a
        match a.trim().parse::<u8>() {
            //verifies if a is u8
            Ok(num) => {
                break num;
            }
            Err(_) => {
                println!("That wasn’t a valid number!");
                continue;
            }
        };
    };
    //AND NOW A IS U8

    println!("{a}"); 
    println!("{}", a * 2); //living proof

    /* DATA TYPESS
array
    A fixed-size array, denoted [T; N], for the element type, T, and the non-negative compile-time constant size, N.
bool
    The boolean type.
char
    A character type.
f32
    A 32-bit floating-point type (specifically, the “binary32” type defined in IEEE 754-2008).
f64
    A 64-bit floating-point type (specifically, the “binary64” type defined in IEEE 754-2008).
fn
    Function pointers, like fn(usize) -> bool.
i8
    The 8-bit signed integer type.
i16
    The 16-bit signed integer type.
i32
    The 32-bit signed integer type.
i64
    The 64-bit signed integer type.
i128
    The 128-bit signed integer type.
isize
    The pointer-sized signed integer type.
pointer
    Raw, unsafe pointers, *const T, and *mut T.
reference
    References, &T and &mut T.
slice
    A dynamically-sized view into a contiguous sequence, [T].
str
    String slices.
tuple
    A finite heterogeneous sequence, (T, U, ..).
u8
    The 8-bit unsigned integer type.
u16
    The 16-bit unsigned integer type.
u32
    The 32-bit unsigned integer type.
u64
    The 64-bit unsigned integer type.
u128
    The 128-bit unsigned integer type.
unit
    The () type, also called “unit”.
usize
    The pointer-sized unsigned integer type.
f16Experimental
    A 16-bit floating-point type (specifically, the “binary16” type defined in IEEE 754-2008).
f128Experimental
    A 128-bit floating-point type (specifically, the “binary128” type defined in IEEE 754-2008).
neverExperimental
    The ! type, also called “never”.*/
}
