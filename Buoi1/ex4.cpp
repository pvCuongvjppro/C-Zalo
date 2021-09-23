#include<stdio.h>
#include<math.h>

int main(){
	int h, t , phi;
	printf("Tong so gio lam viec :"); scanf("%d", &h);
	printf("Tong so gio lam viec qua gio:"); scanf("%d", &t);
	printf("Muc phi tra theo moi gio lam viec: "); scanf("%d", &phi);
	float luong;
	luong = h*phi + t*phi*1.5;
	printf("Luong = %f", luong);
	
}

