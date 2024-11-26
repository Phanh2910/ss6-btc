#include<stdio.h>

int main() {
    int Pass= 12345;  
    int check;           
    int firstTry= 0;             
    int lastTry= 3;          
    while(firstTry < lastTry) {
        printf("Nhap mat khau (1stTry %d of %d): ", firstTry+1, lastTry);
        scanf("%d", &check);

        
        if(check == Pass) {
            printf("Mat khau dung!\n");
            return 0;
        } else {
            printf("Mat khau sai!\n");
            if(check / 1000 == Pass / 1000)
			 {
                printf("Hint: Your password starts with the same four digits!\n");
            }
        }

    }
    printf("Ban da nhap sai %d lan. Tai khoan cua ban bi vo hieu hoa! \n", lastTry);
    return 0;
}
