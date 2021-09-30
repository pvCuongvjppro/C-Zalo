#include<stdio.h>
int main(){
	int n, tien;
	printf("Nhap so dien tieu thu: "); scanf("%d", &n);
	if(0<n&&n<=50){
		tien = n*1678;
	}
	else if( n<=100){
		tien = 50*1678 + (n-50)*1734; 
	}
	else if( n<=200){
		tien = 50*1678 + 50*1734 + (n-100)*2014; 
	}
	else {
		tien = 50*1678 + 50*1734+ 100*2014 + (n-200)*2536; 
	}
	printf("so tien can tra : %d", tien);
}

