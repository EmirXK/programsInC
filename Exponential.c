#include <stdio.h>
#include <math.h>

int main(){
	
	int a,i;
	float payda=1.0,bolum=0,pay,num,sonuc=1;
	scanf("%f",&num);
	for(i=1;i<=15;i++){
		payda=payda*i;
		pay=pow(num,i);
		bolum=(pay/payda);
		sonuc=bolum+sonuc;
	}
	printf("E^%f = %f",num,sonuc);
}
