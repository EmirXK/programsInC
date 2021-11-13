#include <stdio.h>

int main(){
	int a,b;
	a=b=0;
	while(a<6){
		b=0;
		while(b<a+1){
			printf("* ");
			b++;
		}
		printf("\n");
		a++;
	}
	
		
	int c,d,f;
	c=d=f=0;
	while(c<6){
		d=0;
		f=5-c;
		while(d<=f){
			printf("& ");
			d++;
		}
		c++;
		printf("\n");
	}
	
}


