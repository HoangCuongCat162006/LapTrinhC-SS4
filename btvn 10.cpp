#include <stdio.h>
int main(){
	int a,b,c,temp;
	
	printf("Nhap so thu nhat : ");
	scanf("%d",&a);
	
	printf("Nhap so thu hai : ");
	scanf("%d",&b);
	
	printf("Nhap so thu ba : ");
	scanf("%d",&c);
	
	if (a>b){
		temp = a;
		a = c;
		c = temp;
		
	}
	if (b>c){
		temp = b;
		b = c;
		c = temp;
	}
	
	printf(" So thu tu tang dan la : %d , %d , %d \n",a,b,c);
	return 0;
	}
