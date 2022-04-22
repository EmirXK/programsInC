#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// github.com/EmirXK

void biggestrow (int *matrix[]);
void randmatrix (int *matrix[], int min, int max );

int main() {
	int *matrix[10];
	int i,j;
	for (i=0;i<10;i++)
		matrix[i] = (int*) calloc(10,sizeof(int));
	int min, max;
	scanf("%d",&min);
	scanf("%d",&max);
	srand(time(0));
	
	randmatrix(matrix,min,max);
	printf("\n");
	printf("\n");
	biggestrow(matrix);
	
	
	return 0;
}

void randmatrix (int *matrix[], int min, int max ) {
	int i,j;
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			matrix[i][j] = rand() %(max-min+1) + min;
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

void biggestrow (int *matrix[]) {
	int maximum[10];
	int biggest = 0;
	int i,j;
	for (i=0;i<10;i++) {
		biggest = 0;
		for(j=0;j<10;j++) {
			if (matrix[i][j] > biggest) {
				biggest = matrix[i][j];
			}
		}
		maximum[i] = biggest;
		printf("%d ",maximum[i]);
	}
	
}
