#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//made by EmirXK

void armstrong(); //initial declaration

int main(){
	
	
	 armstrong();
	 
	 		
		return 0;
}
	
	// the function
	
	void armstrong(){
		
		//declalring variables
		
		int i,j,temp,temp2,temp3,sum=0, array[5], score;
	
	printf("bir sayi giriniz\n");
	scanf("%d",&score);
	
	//making sure first input data isn't lost when calculating digits
	
	temp = score;
	temp3 = temp;
	
	
	//finding how many digits the given number has
	
	while(temp != 0 ){
		
		temp = temp/10;
		
		i++;
		
	} printf("\nI= %d\n\n",i);
	
	temp2 = i;
	
	//Seperating the digits from the original number and storing them in an array in original order
	
	while(score)
	{
    printf("%d\n", score % 10);
    i = i-1;
    array[i] = score % 10;
    score /= 10;
	}
	
	//confirming the array
	
	printf("array: ");
	for(j=0;j<temp2;j++){
		printf("%d ",array[j]);
	}
	
	printf("\n");
	
	//calculating to check if the original number is an armstrong number (narcicistic number)
	
	for(j=0;j<temp2;j++){
		sum = pow(array[j],temp2) + sum;
	}
	if(sum == temp3){
		printf("girdiginiz sayi bir armstrong sayisidir.");
	}
	else
		printf("girdiginiz sayi bir armstrong sayisi degildir.");
		
	}
