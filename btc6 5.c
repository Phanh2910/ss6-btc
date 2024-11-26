#include<stdio.h>

int main() {
    int year, month, date;
    int n=0;
    printf("insert year: ");
    scanf("%d", &year);
    
    printf("insert month (1 to 12): ");
    scanf("%d", &month);
    if (month<1 || month>12) {
        printf("month not accquired!\n");
        return 1;
    }
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            date= 31;
            printf("thang %d co 31 ngay \n", month);
            break;
        case 4: case 6: case 9: case 11:
            date= 30;
            printf("thang %d co 30 ngay \n", month);
            break;
        case 2:
            date= (year%4 == 0 && (year%100 != 0 || year%400 == 0));
            printf("thang hai co 29 ngay \n", month);
            break;
        default:
            printf("Thang khong hop le!\n");
            return 1;
    }
     if(n==0){
	printf("nam nay co 365 ngay");
	 } else{
	 	printf("nam nay co 366 ngay "); 
	 } 
    return 0;
}
