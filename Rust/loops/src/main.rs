fn main() {//now were gonna talk abt loops
    //first off common ones 
    //the if:

    let mut num: i32=7;

    if num<5 {
        println!("numba less than 5");
    } else if num == 5 {
        println!("numba equal 5");
    } else {
        println!("numba biger than 5");
    }
    println!("");

    //while

    while num <10 {
        println!("{}", num);
        num+=1;
    }
    println!("");

    //for
    
    //we could iterate over a range
    for n in 1..6 { //1..=6 includes 6, this one doesnt
        println!("{}", n);
    }

    //or we could iterate over a vector
    let e = ["hamburga","cheezburga","big mac","whopper"];
    for e in e.iter() {
        println!("{}", e);
    }
    println!("");

    //now the new rust specific loop:

    let looper: i32=loop { //YOU CAN FUCKING USE LOOPS TO ASSIGN VALUES
        num-=1;
        if num==2 {
            break num*2; //basically like the c++ return except with NO OTHER FILE NECESSARY
        }
        else {
            continue; //continue to next iteration (optional but i prefer to include it)
        }
    };

    println!("{}", looper);

    //and the normal one
    let mut t: i32=0;
    loop {
        t+=1;
        println!("normal loop {}", t);
        if t==5 {
            break;
        } else {
            continue;
        }
    }
    println!("");

    //and THO ONE AND ONLY match
    println!("{}", num); //rn num is 2
    match num {
        1 => println!("num is one"),
        2 => println!("num is two"),
        _ => println!("num is something else"),
    };//think of it like switch from c++

    //BUT YOU CAN ASSIGN VALUES WITH MATCH TOO
    num=match num {
        1 => 1,
        2 => 5,
        _ => 8,
    };
    println!("num is now {}", num);

    //loop and match are THE GOATS
}
