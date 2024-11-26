#include<stdio.h>
int main(){
	int n;
	int n1,n2;
	n2=1;
	int a;
	printf("entered number fibonaci ");
	scanf("%d",&n);
	if (n <= 0) {
        printf("entered positive integer.\n");
    } else if(n==1){
		printf("0");
	}
	if(n==2){
		printf("0\n");
		printf("1");
	}
	if(n>=3){
	printf("0\n");
	printf("1\n");
	for (int i=3; i<=n; i++){
		a = n1+n2;
		printf("%d \n",a);
		n1=n2;
		n2=a;
	}
	
	  printf("\n");
}
	return 0;
} 


