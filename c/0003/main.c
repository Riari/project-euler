#include <stdbool.h>
#include <stdio.h>

// Naive implementation.
// TODO: optimise it!

typedef unsigned long int uli;

inline bool is_prime(uli n) {
    for (int i = 3; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

uli find_largest_prime_factor(uli n) {
    // Start at the closest odd number below n
    uli i = n - ((n % 2) + 1);

    for (; i > 1; i -= 2) {
        if (n % i == 0 && is_prime(i))
            return i;
    }

    return 0;
}

uli solve(uli n) {
    printf("Largest prime factor of %lu: %lu\n", n,
           find_largest_prime_factor(n));
}

int main() {
    solve(13195);
    solve(600851475143);
}
