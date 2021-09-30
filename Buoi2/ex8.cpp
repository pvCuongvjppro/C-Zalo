#include<stdio.h>
int main(){
	float a,b,c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	if(a+b > c && b+c > a && a+c >b){
		printf("la tam giac");
	}
	else{
		printf("khong phai la tam giac");
	}
}

