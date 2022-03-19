#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main() {
	
	int i;
	int array[SIZE];
	int temp_array[SIZE];
	int temp;
	
	int input;
	
	srand(time(0));
	
	for (i=0; i<SIZE; i++) {
		array[i] = rand() %101;
		printf("%d ",array[i]);
	}
	printf("\n");
	scanf("%d", &input);
	printf("\n");
	for (i=0; i<SIZE-input; i++) {
		temp = array[i+1];
		array[i] = temp;
	}
	for (i=0; i<SIZE; i++) {
		printf("%d ",array[i]);
	}
}
