fn fib(n: i32) -> i64 {
    let mut cur: i64;
    let mut prev: i64;
    prev = 0;
    cur = 1;
    if n == 0 {
        return 0;
    }
    for _i in 0..n {
        let temp: i64;
        temp = cur;
        cur += prev;
        prev = temp;
    }
    return cur;
}
0 1 1 2 3 
fn main() {
    const MH_LOGO_ASCII: &str = include_str!("mh_logo_ascii.txt");
    println!("{}", MH_LOGO_ASCII);
    println!("Hello from Michigan Hackers!");
    println!("Learn more: https://www.youtube.com/watch?v=dQw4w9WgXcQ");

    println!("Doing some math...");
    println!("fib(6) = {}", fib(6));
    // Why is this so fast...
    // TODO: make it go faster
    println!("fib(42) = {}", fib(42));
}
