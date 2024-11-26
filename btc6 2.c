#include <stdio.h>

int main() {
    int a,  b= 0, c= 0;
    for(int i = 0; i < 5; i++) {
        printf("enter the number %d: ", i+1);
        scanf("%d", &a);
        if(a % 2 == 0)
            b++;
        else
            c++;
    }
    printf("number of so chan la: %d\nNumber of so le la: %d",b,c);
    return 0;
}
