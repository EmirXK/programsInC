#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

// declaring variables and binding the rand() fuctction to local system time

	int die_1[6]={1,2,3,4,5,6}, die_2[6]={1,2,3,4,5,6},i,j;
	
	int roll[6][6];
	
	int rand_1, rand_2, num1, num2;
	
	srand(time(0));

// creating the roll die and declaring it a starter value of zero per every possible scenario

for (i = 0; i < 6; i++){
	for (j = 0; j < 5; j++){
		roll[i][j] = 0;
	}
}

// rolling the two dice 100 times and giving their value to the "roll" value per roll.

printf("Every die roll result in  {x,y} format: \n\n");

for (i = 0; i < 100; i++){
	
	rand_1 = rand()%6;
	rand_2 = rand()%6;
	
	num1 = die_1[rand_1];
	num2 = die_2[rand_2];
	
	roll[num1-1][num2-1] += 1; /*calculating how many times we got a specific roll
								we add the +1 because it's impossible to roll a zero with a die. */
	
	printf("{%d,%d} ",num1,num2); //printing the results
}

printf("\n\n");

printf("Displaying how many times any specific roll has landed\n\n");

// loop to display the specific roll values mentioned above.

for (i = 1; i <7; i++){
	for (j = 1; j <7; j++){
		printf("{%d, %d} : %d\n",i,j,roll[i-1][j-1]);
	}
}

return 0;
}
