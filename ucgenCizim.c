#include <stdio.h>

int main(){
	
	int a, b=0, bos, sayi=19;
	
	for(a=1; a<=sayi; ++a, b=0){
		
		for(bos=1; bos<=sayi-a; ++bos){
			printf("  ");
		}
		
		for(b=0; b!=2*a-1; b=b+1){
		 	printf("* ");
		}
		printf("\n");
	}

	return 0;
	
}

