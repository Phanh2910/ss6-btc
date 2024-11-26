#include<stdio.h>

int main(){
	int n;
	int count= 0;
	int num= 0;
	int p=2;
	printf("nhap so luong so nguyen to: ");
	scanf("%d",&n);
	while(num<n){
		count = 0;
		for(int i=1; i<=p; i++){
			if(p%i==0){
				count++;
			}	
		}
		if(count==2){
			num++;
			printf("so nguyen to %d \n",p);
		}
		p++;
	}
	return 0;
}
