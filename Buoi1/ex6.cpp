#include<stdio.h>
#include<math.h>
int main(){
	float x1 , y1 , x2 , y2;
	printf("Hoanh do A : "); scanf("%f", &x1);
	printf("Tung do A : "); scanf("%f", &y1);
	printf("Hoanh do B : "); scanf("%f", &x2);
	printf("Tung do B : "); scanf("%f", &y2);
	float kc;
	kc=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("Khoang cach : %f", kc);
}

