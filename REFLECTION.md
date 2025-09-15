# Assignment 2 Reflection - Angelina Htun

## Approach to the Problem

I first restated each textbook algorithm in my own words, identified the dominant operation that drives runtime, then implemented each as a separate function in `permutations.cpp`. I kept `main.cpp` untouched and used it to time each algorithm on the required input sizes.

## Techniques Used

- **Algorithm 1:** rejection sampling + **linear search** in the already-filled prefix to avoid duplicates.
- **Algorithm 2:** random **empty-slot probing** (zeros mean empty) until placing all numbers.
- **Algorithm 3:** **Fisher–Yates (Knuth) shuffle**: initialize `1..N`, then one pass of random swaps.

## Challenges Encountered

- **Uniformity reasoning:** Verified that Alg 2’s “random empty slot” is uniform because each step chooses uniformly among remaining empty positions.
- **Off-by-one / ranges:** Used `randint(k)` as `0..k-1` and guarded the Fisher–Yates loop as `for (i = size; i > 1; --i)` to avoid unsigned underflow.
- **Performance at scale:** Ran the largest sizes only for the algorithms intended to handle them (Alg 2 and 3), as required.

## Conclusions

- Asymptotic behavior dominates:  
  - **Alg 1:** `Θ(N² log N)` — becomes impractical as `N` grows due to repeated re-draws plus linear searches.  
  - **Alg 2:** `Θ(N log N)` — substantially better; the log factor reflects the coupon-collector slow-down as the array fills.  
  - **Alg 3:** `Θ(N)` — simplest and fastest; the right default in practice.
- All three are **in-place** with `Θ(1)` extra space; the real difference is time complexity.
- The empirical timings followed these trends: super-quadratic for Alg 1, slightly-super-doubling per doubling for Alg 2, and near-linear for Alg 3.
