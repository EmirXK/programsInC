#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Emir Bince

void arraySum(int array[], int digits){
	
	//use static int to prevent reassignment of the variable upon recursion.
	//without static int this variable would reset itself to 0 every time recursion happens.
	
	static int result;
	  
	if(digits == 0){
		printf("%d",result);
	}
	else{
	result = result + array[digits-1];
	return arraySum(array,digits-1);
	}
}

int main(){
	
	int num;
	int digits=0;
	int temp;
	int i;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	temp = num;
	
	while(temp!=0){
		temp = temp/10;
		digits++;
	} printf("\ndigits: %d\n",digits);
	
	int array[digits];
	i = digits;
	temp = num;
	 
	while(temp){
    i = i-1;
    array[i] = temp % 10;
    temp /= 10;
	}
	
	printf("\n\n");
	printf("Num array: \n");
	for(i = 0; i<digits; i++){
		printf("%d ",array[i]);
	}
	
	printf("\n\n");
	
	//printing the individual digits and a plus symbol for clarity.
	for(i=0; i<digits; i++){
		printf("%d ",array[i]);
		if(i!=digits-1){
			printf("+ ");
		}
	} printf("= ");
	
	arraySum(array,digits);
	
	
	getch();
	return 0;
}
