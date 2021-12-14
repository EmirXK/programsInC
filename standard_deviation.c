#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//made by EmirXK

int main(){
	
	int i,array[10],array2[10];
	float sd,sum,sum2,mean;
	
	srand(time(0));
	
	//creating the array
	
	for(i=0;i<10;i++){
		
		array[i] = rand() %101;
		printf("%d ", array[i]);
		
	}
	
	//finding the mean
	
	for(i=0;i<10;i++){
		sum = array[i] + sum;
	}
	
	mean = sum/10;
	
	printf("\nThe mean of the random array: %.1lf ",mean);
	
	//calculating the standard deviation
	
	for(i=0;i<10;i++){
		
		sum2 = pow((array[i] - mean),2) + sum2;
		
	}
	
	sd = sqrt(sum2/9);
	
	printf("\nStandard Deviation: %.1lf", sd);
	
	
	return 0;
}
