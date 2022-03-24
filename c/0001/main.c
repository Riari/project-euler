#include <stdio.h>

void solution_a() {
    int result = 0;
    for (int i = 3; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }

    printf("Solution A: %d\n", result);
}

int find_sum(int k) {
    int n = 999 / k;
    return k * (n * (n + 1) / 2);
}

void solution_b() {
    printf("Solution B: %d\n", find_sum(3) + find_sum(5) - find_sum(15));
}

int main() {
    solution_a();
    solution_b();
}
