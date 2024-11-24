#include<stdio.h>

int main(){
	
	int number;
	printf("Nhap vao mot so nguyen ");
	scanf("%d",&number);
	
	if (number >0) {
		printf ("so %d la so duong \n",number);
	}else if (number <0){
		printf ("so %d la so am \n", number );
	}else {
		printf ("so ban nhap la 0, khong phai so am va khong phai so duong \n");
	}
	    
	return 0;
}
