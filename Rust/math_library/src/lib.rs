///Adds two 32-bit float numbers and returns the result as a 32-bit float
pub fn add(a: f32, b: f32) -> f32 { // this is how you do a functionin rust btw
    a+b
}

///Subtracts two 32-bit float numbers and returns the result as a 32-bit float
pub fn sub(a: f32, b: f32) -> f32 {
    a-b
}

///Multiplies two 32-bit float numbers and returns the result as a 32-bit float
pub fn mult(a: f32, b: f32) -> f32 {
    a*b
}

///Divides two 32-bit float numbers and returns the result as a 32-bit float
pub fn div(a: f32, b: f32) -> f32 {
    a/b 
}

///Raises a 32-bit float number to the power of an unsigned 32-bit integer and returns the result as a 32-bit float
pub fn pow(a: f32, b: u32) -> f32 {
    let _i: i32 = 0;
    let mut result: f32 = 1.0;

    for _i in 1..=b {
        result *= a;
    }

    result
}

///Calculates the factorial of an unsigned 32-bit integer and returns the result as an unsigned 32-bit integer
pub fn fact(a: u32) -> u32 {
    if a == 0 {
        return 1;
    }
    let mut result = 1;
    for a in 1..=a {
        result *= a;
    }
    result
}

///Calculates the remainder of the division of two 32-bit float numbers and returns the result as a 32-bit float
pub fn rem(a: f32, b: f32) -> f32 {
    a % b
}