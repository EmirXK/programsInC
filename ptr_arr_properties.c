#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define SIZE 10

void arr_properties(int *ptr_arr[], int *ptr_biggest, int *ptr_smallest, float *ptr_average) {
	
	int i;
	int j;
	float sum = 0;
	float size = SIZE;
	
	for (i=0; i<SIZE; i++) {
		for (j=0; j<SIZE; j++){
			if (*ptr_arr[i] > *ptr_arr[j] && *ptr_arr[i] > *ptr_biggest) {
				*ptr_biggest = *ptr_arr[i];
			}
			if (*ptr_arr[i] < *ptr_arr[j] && *ptr_arr[i] < *ptr_smallest) {
				*ptr_smallest = *ptr_arr[i];
			}
		}
	}
	for (i=0; i<SIZE; i++) {
		sum = sum + *ptr_arr[i];
	}
	*ptr_average = sum/size;
}

int main() {
	
	int arr[SIZE];
	int i;
	int biggest;
	int smallest;
	float average;
	
	int *ptr_biggest = &biggest;
	int *ptr_smallest = &smallest;
	float *ptr_average = &average;
	int *ptr_arr[SIZE];
	
	srand(time(0));
	
	for (i=0; i<SIZE; i++) {
		ptr_arr[i] = &arr[i];
	}
	printf("[ ");
	for (i=0; i<SIZE; i++) {
		arr[i] = rand() %101;
		printf("%d, ", arr[i]);
	}
	printf("]");
	biggest = arr[0];
	smallest = arr[0];
	
	printf("\n\n");
	
	arr_properties(ptr_arr, ptr_biggest, ptr_smallest, ptr_average);
	
	printf("Biggest: %d\nSmallest: %d\nAverage: %.2lf", biggest, smallest, average);
	
	
	getch();
	return 0;
}
