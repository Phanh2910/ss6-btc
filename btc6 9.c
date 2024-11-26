#include <stdio.h>

int main() {
    for (int n = 100; n <= 999; n++) {
        int a = n / 100;
        int b = (n / 10) % 10;
        int c = n % 10;

        if (n == a * a * a + b * b * b + c * c * c) {
            printf("%d\n", n);
        }
    }
    return 0;
}

