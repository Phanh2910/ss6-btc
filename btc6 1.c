#include <stdio.h>

int main() {
    int number = 0;  
    int sum;     
    int a;           
    printf("insert random number: \n");
    printf("\n please insert  interger: \n");
    for (int i = 1; i < 6; i++) {
        printf("insert number %d: ", i);
        scanf("%d", &number);
        if (number % 2 != 0) {  
            sum += number;      
        }
    }
    printf("Tong cac so le la: %d\n", sum);

    return 0;
}
