#include <stdio.h>

int main(){
	
	long long int num,i,fact=1LL;
	
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	
	printf("%d",fact);
	
	return 0;
}
