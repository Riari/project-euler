#include <stdio.h>

int main() {
    int a = 1, b = 1, sum = 0, result = 0;
    while (result < 4000000) {
        if (result % 2 == 0)
            sum += result;

        result = a + b;
        b = a;
        a = result;
    }

    printf("%d", sum);
}
