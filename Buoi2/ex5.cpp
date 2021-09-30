#include<stdio.h>
int main(){
// BIEN LUAN PT bac nhat ax + b = 0 

	float a,b,x;
	printf("a=");scanf("%f",&a);
	printf("b=");scanf("%f",&b);
	x=-b/a;
	if(a!=0){
		printf("phuong trinh co nghiem x=%f",x);
	} else {
			if(b==0){
				printf("phuong trinh vo so nghiem");
				}else {
					printf("phuong trinh vo nghiem");
				}
			}
			
			
	}


