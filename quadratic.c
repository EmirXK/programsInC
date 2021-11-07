#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(){
	float a,b,c,x1,x2;
	printf("ax^2+bx+c=0 kuralina uyacak a,b ve c olmak uzere 3 sayiyi sirasiyla giriniz: ");
	scanf("%f %f %f", &a, &b, &c);
	float delta = pow(b,2)-(4*a*c);
	if(delta>0){
		printf("denklemin iki koku vardir\n");
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("x1 = %f  ve  x2 = %f",x1,x2);

	} else if(delta == 0){
		printf("denklemin bir cozumu vardir\n");
		x1 = (-b + sqrt(delta))/(2*a); // -b - kokDelta da yazilabilirdi, farketmez cunku sonuc ayni gelir
		printf("Sonuc: %f",x1);
	} else{
		printf("denklemin reel sayilarda couzumu yoktur");
	}
	return 0;
}

