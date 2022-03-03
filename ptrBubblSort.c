#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define SIZE 20

//modified the original recursive bubblesort to include array-pointers.
//Emir Bince


void arraySort(int *pArray[], int size) {
	int i;
	int temp;
	
	//recursive pointer bubblesort
	
	if(size == 1) {
		return;
	} for(i=0;i<size-1;i++){
		if(*pArray[i] > *pArray[i+1]){
			temp = *pArray[i];
			*pArray[i] = *pArray[i+1];
			*pArray[i+1] = temp;
		}
	}
	size -= 1;
	arraySort(pArray,size);
}


int main() {
	
	int size;
	int array[SIZE];
	int i,j;
	srand(time(0));
	
	int *pArray[SIZE];
	
	//assign rand value and copy value adress to pointer
	for(i=0;i<SIZE;i++){
		array[i] = rand() %101;
		pArray[i] = &array[i];
	}
	//print rand array
	printf("Random Array:\n");
	for(i=0;i<SIZE;i++){
		printf("%d ",array[i]);
	} printf("\n\n");
	
	
	//print pointer array(testing purposes)
	printf("Pointer Array:\n");
	for(i=0;i<SIZE;i++){
		printf("%d ", *pArray[i]);
	} printf("\n\n");
	
	
	size = SIZE;  //we need to use SIZE as a variable.
	
	
	//sorting the pointer array
	arraySort(pArray,size);
	
	
	//notice how our original array got sorted without even using it in the function.
	printf("Bubble Sorted Array:\n");
	for(i=0;i<SIZE;i++){
		printf("%d ", array[i]);
	} printf("\n\n");
	
	//This is the pointer array, confirming that both the arrays are the same.
	printf("Bubble Sorted Pointer Array:\n");
	for(i=0;i<SIZE;i++){
		printf("%d ", *pArray[i]);
	} printf("\n\n");
	

	
	printf("\n\n\nLargest Number: %d", array[SIZE-1]);
	
	printf("\n\nSmallest Number: %d", array[0]);
	

	getch();
	return 0;
}
