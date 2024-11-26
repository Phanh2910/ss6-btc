#include<stdio.h>

int main() {
    int n, i;
    printf("insert interger number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d not an interger number .\n", n);
        return 0;
    } else{
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d not an interger number .\n", n);
            return 0;
        }
    }
    
}
    printf("%d is a inter ger number .\n", n);
    return 0;
}
