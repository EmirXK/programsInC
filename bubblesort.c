#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//made by EmirXK

int main(){
	
	int i,j,k,array[50];
	
	//creating the array
	
	for(i=0;i<50;i++){
		
		array[i] = rand() %101;
		printf("%d ",array[i]);
	}
	
	printf("\n\n\n\n\n\n\n");
	
	//bubble sort mechanism
	
	for(i=0;i<50;i++){
		
		for(j=0;j<50;j++){
			
			if(array[i]<array[j]){
				
				k = array[i];
				
				array[i] = array[j];
				
				array[j] = k;
				
			}
			
		}
		
	}
		for(i=0;i<50;i++){
		printf("%d ",array[i]);
	}
		
		
	return 0;
		
}
