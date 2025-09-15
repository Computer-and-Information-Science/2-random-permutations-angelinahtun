# Assignment 2 Analysis - Angelina Htun

## Algorithm 1

Your test results and analysis here...

## Algorithm 2

- **Process:** pick random indices until landing on an empty slot, then place the next number.
- **Total time:** expected random picks to fill all slots = `N·H_N` by coupon-collector ⇒ `Θ(N log N)`. Each pick/check is `Θ(1)`.
- **Space:** `Θ(1)` extra.

## Algorithm 3

- **Process:** initialize `a[i]=i+1`, then for `i=N..2` pick `j∈[0..i-1]` and swap `a[i-1]` with `a[j]`.
- **Total time:** exactly `N-1` swaps ⇒ `Θ(N)`.
- **Space:** `Θ(1)` extra.




