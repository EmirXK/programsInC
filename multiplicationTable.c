#include <stdio.h>
#include <math.h>

int main(){
	
int a,b;
	for(a=1;a<=10;a++){
		for(b=1;b<=10;b++){
			printf("%d",b);
			printf(" * %d = %d\n",a,a*b);
		}
		printf("\n\n");
	}
	return 0;
  }

