#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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
		
	printf("Please input the size of the array: ");
	scanf("%d",&size);
	printf("\n");
	
	int array[size];
	int i,j;
	int value;
	
	
	int *pArray[size];
	
	printf("Start typing in the numbers: \n");
	
	//assign rand value and copy value adress to pointer
	for(i=0;i<size;i++){
		scanf("%d",&value);
		array[i] = value;
		pArray[i] = &array[i];
	}
	//print rand array
	printf("Random Array:\n");
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	} printf("\n\n");
	
	
	//print pointer array(testing purposes)
	printf("Pointer Array:\n");
	for(i=0;i<size;i++){
		printf("%d ", *pArray[i]);
	} printf("\n\n");
	
	
	//sorting the pointer array
	arraySort(pArray,size);
	
	
	//notice how our original array got sorted without even using it in the function.
	printf("Bubble Sorted Array:\n");
	for(i=0;i<size;i++){
		printf("%d ", array[i]);
	} printf("\n\n");
	
	//This is the pointer array, confirming that both the arrays are the same.
	printf("Bubble Sorted Pointer Array:\n");
	for(i=0;i<size;i++){
		printf("%d ", *pArray[i]);
	} printf("\n\n");
	

	
	printf("\n\n\nLargest Number: %d", array[size-1]);
	
	printf("\n\nSmallest Number: %d", array[0]);
	

	getch();
	return 0;
}
