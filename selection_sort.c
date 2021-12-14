#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	
	int a[50],i,j,min,temp,position;
	
	for(i=0;i<50;i++){
		a[i] = rand() %101;
		printf("%d ",a[i]);
	}
	
	printf("\n\n\n\n\n");
	
for(i = 0; i < 50; i++){
		position=i;
		for(j = i + 1; j < 50; j++){
			if(a[position] > a[j])
				position=j;
		}	
	if(position != i){
		temp=a[i];
		a[i]=a[position];
		a[position]=temp;
	}
}
printf("Sorted Array: ");
for(i=0;i<50;i++)
printf("%d ",a[i]);
return 0;
	
}
