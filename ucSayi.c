#include <stdio.h>
#include <stdlib.h>

int main(){
	float giris1,giris2,giris3;
	printf("3 sayi giriniz:  ");
	scanf("%f %f %f", &giris1, &giris2, &giris3);
	
	if(giris1>giris2){
		if(giris1>giris3){
			printf("En buyuk sayi:  %.2lf", giris1);
		} else{
			printf("En buyuk sayi:  %.2lf", giris3);
		}
	} else{
		if(giris2>giris3){
			printf("En buyuk sayi:  %.2lf", giris2);
		} else{
			printf("En buyuk sayi:  %.2lf", giris3);
		}
	}
	return 0;
}

