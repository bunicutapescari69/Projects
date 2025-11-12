pub fn add(a: f32, b: f32) -> f32 { // this is how you do a functionin rust btw
    a+b
}

pub fn sub(a: f32, b: f32) -> f32 {
    a-b
}

pub fn mult(a: f32, b: f32) -> f32 {
    a*b
}

pub fn div(a: f32, b: f32) -> f32 {
    a/b 
}

pub fn pow(a: f32, b: i32) -> f32 {
    let _i: i32 = 0;
    let mut result: f32 = 1.0;

    for _i in 1..=b {
        result *= a;
    }

    result
}

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

pub fn rem(a: f32, b: f32) -> f32 {
    a % b
}