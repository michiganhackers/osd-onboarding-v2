fn fib(n: i32) -> i64 {
    if n == 0 || n == 1 {
        return n.into();
    }
    fib(n-2) + fib(n-1)
}

fn main() {
    const MH_LOGO_ASCII: &str = include_str!("mh_logo_ascii.txt");
    println!("{}", MH_LOGO_ASCII);
    println!("Hello from Michigan Hackers!");
    println!("Learn more: https://www.youtube.com/watch?v=dQw4w9WgXcQ");

    println!("Doing some math...");
    println!("fib(6) = {}", fib(6));
    // Why is this so slow...
    // TODO: make it go faster
    println!("fib(42) = {}", fib(42));
}
