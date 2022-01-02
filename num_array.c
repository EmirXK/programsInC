#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void max();
//made by EmirXK.

int main(){
	int max1,max2;
	int randNum,i,j,k,l,m;
	float average=0,sum=0;
	int randArray[14];
	srand(time(0));
	
	// giving the array random values
	
	for(i=0;i<=14;i++){
		

		randNum = (rand() % (60 - 20 + 1)) + 20;
		printf("%d  ", randNum);
		
		randArray[i] = randNum;
	}

	printf("\n\n\n Verification process");

	// verifying the values

	printf("\n\n\n");
	for(j=0;j<=14;j++){
	
		printf("%d  ", randArray[j]);
	
	}

	// finding the arithmetic average of the numbers

	for(k=0;k<=14;k++){
	
		sum = randArray[k] + sum;
	
	}

	printf("\n\n\n");
	
	average = sum/15;

	printf("The arithmetic average is : %.2lf \n", average);
	
	// getting the max number
	
	max(randArray);
	
	return 0;
}

void max(int randArray[14]) {
	int m;
		for(m=0;m<=14;m++){
		
		if(randArray[0] < randArray[m]){
			randArray[0] = randArray[m];
		}
		
	}
	
	printf("\nLargest = %d\n",randArray[0]);
	
}
