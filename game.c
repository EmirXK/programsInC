#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int guess, counter, randNum, win;
	counter = 0;
	win = 0;
	srand(time(NULL));
	randNum = rand() % 101;
	printf("Welcome to the game, you have 6 attempts to guess a random number between 0 and 100. Good luck.\n");
	while(counter<6){
		scanf("%d", &guess);
		if(guess == randNum){
			printf("You Win!\n");
			win = 1;
			counter = 7;
		} else if(guess>randNum){
			printf("Input a lower number\n");
			counter = counter + 1;
		} else{
			printf("Input a higher number\n");
			counter = counter + 1;
		}
	} if(win==0){
		printf("You lost.. The random number was: %d \n", randNum);
	} else{}
	return 0;
}

