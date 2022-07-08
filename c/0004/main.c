#include <stdbool.h>
#include <stdio.h>
#include <math.h>

#define TWO_DIGITS 99
#define THREE_DIGITS 999

typedef unsigned int uint;

inline static bool is_palindromic(int n) {
    int length = (int)ceil(log10(n + 1));
    for (int i = 0; i < length / 2; i++) {
        if ((n / (int)pow(10, i)) % 10 != (n / (int)pow(10, length - i - 1)) % 10) {
            return false;
        }
    }

    return true;
}

inline static uint find_largest_palindrome(uint max) {
    uint a = max + 1;
    uint largest = 0;

    while (a--) {
        uint b = max + 1;
        while (b--) {
            uint n = a * b;
            if (n > largest && is_palindromic(n)) {
                largest = n;
            }
        }
    }

    return largest;
}

bool solve(uint max) {
    printf("Largest palindrome up to %d: %d\n", max * max,
           find_largest_palindrome(max));
}

int main() {
    solve(TWO_DIGITS);
    solve(THREE_DIGITS);
}
