#include<stdio.h>
int main(){
	int a=21, b=5;
	float c;
	c= a/ b;
	printf("Khong ep kieu c= %f", c);
//	c = (float)a/b;
	c= 1.0*a/b;
	printf("\nSau khi ep kieu c = %f ", c);
}

