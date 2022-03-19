#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define SIZE 10

int array_sort(int *parray[], int *psize) {
	int i;
	int temp;
	
	if(*psize == 1) {
		return;
	} for(i=0;i<*psize-1;i++){
		if(*parray[i] > *parray[i+1]){
			temp = *parray[i];
			*parray[i] = *parray[i+1];
			*parray[i+1] = temp;
		}
	}
	*psize -= 1;
	array_sort(parray, psize);
}

void array_merge(int *ptr_arr_1[], int *ptr_arr_2[], int *ptr_merge_arr[]) {
	
    int i = 0;
    int j = 0;
    int k = 0;
    
    while (i < SIZE && j < SIZE) {
        if (*ptr_arr_1[i] < *ptr_arr_2[j]) {
            *ptr_merge_arr[k++] = *ptr_arr_1[i++];
        }
        else {
            *ptr_merge_arr[k++] = *ptr_arr_2[j++];
        }
    }
    
    while (i < SIZE) {
        *ptr_merge_arr[k++] = *ptr_arr_1[i++];
    }
    
    while (j < SIZE) {
        *ptr_merge_arr[k++] = *ptr_arr_2[j++]; 
    }
    
}


int main() {
	int i;
	int arr_1[SIZE];
	int arr_2[SIZE];
	int size;
	int merge_arr[SIZE+SIZE];
	
	int *ptr_arr_1[SIZE];
	int *ptr_arr_2[SIZE];
	int *ptr_merge_arr[SIZE+SIZE];
	int *ptr_size;
	
	srand(time(0));
	size = SIZE;
	ptr_size = &size;
	
	for (i=0; i<SIZE+SIZE; i++) {
		ptr_merge_arr[i] = &merge_arr[i];
	}
	
	for(i=0; i<SIZE; i++) {
		arr_1[i] = rand() %101;
		ptr_arr_1[i] = &arr_1[i];
	}
	
	for(i=0; i<SIZE; i++) {
		arr_2[i] = rand() %101;
		ptr_arr_2[i] = &arr_2[i];
	}
	
	printf("Random Arrays: \n\n");
	
	for(i=0; i<SIZE; i++) {
		printf("%d ", arr_1[i]);
	}
		printf("\n");
	
	
	for(i=0; i<SIZE; i++) {
		printf("%d ", arr_2[i]);
	}
		printf("\n");
	
	array_sort(ptr_arr_1, ptr_size);
	size = SIZE;
	array_sort(ptr_arr_2, ptr_size);
	
		printf("\n");
		
	printf("Sorted Arrays: \n\n");
		
	for(i=0; i<SIZE; i++) {
		printf("%d ", arr_1[i]);
	}
		printf("\n");
	
	
	for(i=0; i<SIZE; i++) {
		printf("%d ", arr_2[i]);
	}
		printf("\n");
		printf("\n");
		
	array_merge(ptr_arr_1, ptr_arr_2, ptr_merge_arr);
	
	printf("Merged Arrays: \n\n");
	
	for(i=0; i<SIZE+SIZE; i++) {
		printf("%d ", merge_arr[i]);
	}
	
	getch();
	return 0;
}
