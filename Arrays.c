#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


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

// getting the min number

for(m=0;m<=14;m++){
	
	if(randArray[0] > randArray[m]){
		randArray[0] = randArray[m];
	}
	
}

printf("\n\nSmallest = %d\n",randArray[0]);

//getting the largest and second largest number

 max1 = max2 = INT_MIN;

 for(i=0; i<15; i++)
    {
        if(randArray[i] > max1)
        {
            max2 = max1;
            max1 = randArray[i];
        }
        else if(randArray[i] > max2 && randArray[i] < max1)
        {
            max2 = randArray[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);


return 0;
}
