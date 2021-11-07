#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b,c;
	printf("Uc kenar uzunluklarini yaziniz: ");
	scanf("%f %f %f", &a, &b, &c);
	if(a == b){
		if(b == c){
			printf("Ucgen cesidi: eskenar");
		} else{
			printf("Ucgen cesidi: ikizkenar");
		}
	}	else if(b == c){
		printf("Ucgen cesidi: ikizkenar");
	}	else if(a == c){
			printf("Ucgen cesidi: ikizkenar");
	}	else{
		printf("Ucgen cesidi: cesitkenar");
	}
	
	return 0;
}

