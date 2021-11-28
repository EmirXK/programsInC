#include<stdio.h>

int main(){
	
	int i,j,k;
	
	for(i=1;i<=10;i++){
		
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	i=j=k=1;
	int satir=10;
	
	for(i=1;i<=10;i++){
		satir=satir-1;
		for(j=1;j<=satir;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
	
	i=j=k=1;
	 satir=10;
	
	for(i=1;i<=10;i++){
		satir=satir-1;
		for(k=1;k<=i;k++){
			printf(" ");
		}

		for(j=1;j<=2*satir-1;j++){
			printf("*");
		}
		
		printf("\n");
	}
	
	
}
