#include<stdio.h>
#include<string>
#include<conio>
int main(){
	int a,b;
	scanf("%d", &a);
	scanf("%d", &b);
	if(a+b==5){
		printf("=5");
	}
	else if (a+b==6){
		printf("=6");
	}
	else if(a+b==7){
		printf("=7");
	}
	else{
		printf("khong thuc hien");
	}
}

