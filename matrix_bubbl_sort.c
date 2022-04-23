#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define SIZE 6

// github.com/EmirXK

// C program to sort a matrix from the index[0,0]

int main() {
	int matrix[SIZE][SIZE];
	int i,j;
	srand(time(0));
	printf("Random matrix:\n\n");
	for (i=0;i<SIZE;i++) {
		for(j=0;j<SIZE;j++) {
			matrix[i][j] = rand() %(100-10) + 10;
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int temp;
	int arr[SIZE*SIZE];
	int k=0;
	for (i=0;i<SIZE;i++) {
		for (j=0;j<SIZE;j++) {
				arr[k] = matrix[i][j];
				k++;
		}
	}
	printf("Random array:\n\n");
	for (k=0;k<SIZE*SIZE;k++) {
		printf("%d ",arr[k]);
	}
	printf("\n");
	printf("\n");
	for (i=0;i<SIZE*SIZE;i++) {
		for (j=0;j<SIZE*SIZE;j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Sorted array:\n\n");
	for (k=0;k<SIZE*SIZE;k++) {
		printf("%d ",arr[k]);
	}
	printf("\n");
	printf("\n");
	k=0;
	printf("Matrix sorted for rows:\n\n");
	for (i=0;i<SIZE;i++) {
		for (j=0;j<SIZE;j++) {
				matrix[i][j] = arr[k];
				k++;
				printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("Matrix sorted for columns:\n\n");
	k=0;
	for (i=0;i<SIZE;i++) {
		for (j=0;j<SIZE;j++) {
				matrix[i][j] = arr[k];
				k++;
				printf("%d ",matrix[j][i]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
