#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int main() {
	
	int i;
	int array[SIZE];
	int temp;
	int temp_array[SIZE];
	int input;
	
	int *ptr_array[SIZE];
	int *ptr_temp_array[SIZE];
	
	srand(time(0));
	
	for(i=0; i<SIZE; i++) {
		array[i] = rand() %101;
		ptr_array[i] = &array[i];
		printf("%d ", *ptr_array[i]);	
	}
	
	loop:
	
	printf("\n");
	printf("User Input: ");
	scanf("%d", &input);
	
	if (input < 10) {
	
		for(i=0; i<input; i++) {
			temp = array[i];
			temp_array[i] = temp;
			ptr_temp_array[i] = &temp_array[i];
			array[i] = array[SIZE-input+i];
			array[SIZE-input+i] = temp;
		}
		for (i=SIZE; i>input; i--) {
			ptr_array[i] = ptr_array[i-input];
		}
		for(i=0; i<input; i++) {
			ptr_array[input+i] = ptr_temp_array[i];
		}
		
		
		for(i=0; i<SIZE; i++) {
			printf("%d ", *ptr_array[i]);
		}
	}
	else{
		printf("User input must be smaller than 10.\n");
		goto loop;
	}
	
	getch();
	return 0;
}
