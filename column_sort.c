#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// github.com/EmirXK

void matrix_sort(int matrix[SIZE][SIZE]);

int main () {
	srand(time(0));
	int matrix[SIZE][SIZE];
	int i;
	int j;
	int temp;
	int digits = 0;
	
	printf("rand matrix\n\n");
	for (i=0;i<SIZE;i++) {
		for (j=0;j<SIZE;j++) {
			digits=0;
			temp = matrix[i][j] = rand()%100;
			printf("%d ",matrix[i][j]);
			while (temp != 0) {
				temp = temp/10;
				digits++;
			}
			switch (digits){
				case 0:
					printf("  ");
					break;
				case 1:
					printf("  ");
					break;
				case 2:
					printf(" ");
					break;
			}
					
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	
	int size = SIZE;
	
	matrix_sort(matrix);
	
	
	
	return 0;
}

void matrix_sort(int matrix[SIZE][SIZE]) {
	int i,j,m;
	int temp;
	int biggest = -1;
	int smallest = 100;
	int digits = 0;
	
	float average = 0;
	float stats[SIZE][3];
	
	for (i=0;i<SIZE;i++) {
		for (j=0;j<SIZE;j++) {;
			for (m=0;m<SIZE;m++) {
					if (matrix[m][i] > matrix[j][i]) {
						temp = matrix[j][i];
						matrix[j][i] = matrix[m][i];
						matrix[m][i] = temp;
					}
			}
		}
	}
	printf("\n(column_sorted)\n\n");
	for (i=0;i<SIZE;i++) {
		for (j=0;j<SIZE;j++) {
			digits=0;
			printf("%d ",matrix[i][j]);
			temp = matrix[i][j];
			while (temp != 0) {
				temp = temp/10;
				digits++;
			}
			switch (digits){
				case 0:
					printf("  ");
					break;
				case 1:
					printf("  ");
					break;
				case 2:
					printf(" ");
					break;
			}
					
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	
	for (i=0;i<SIZE;i++) {
		biggest = -1;
		smallest = 100;
		average = 0;
		for (j=0;j<SIZE;j++) {
			if (matrix[j][i] > biggest) {
				biggest = matrix[j][i];
			}
			if (matrix[j][i] < smallest) {
				smallest = matrix[j][i];
			}
			average = average + matrix[j][i];
		}
		stats[i][0] = biggest;
		stats[i][1] = smallest;
		stats[i][2] = average/10;
	}
	printf("\n(biggest, smallest, average)\n\n");
	for(i=0;i<10;i++) {
		for(j=0;j<3;j++) {
			if (j == 2) {
			printf("%.1lf  ",stats[i][j]);
		}
		else {
			printf("%.0lf  ",stats[i][j]);
		}
		if (stats[i][j] < 10) {
			printf(" ");
		}
		
		}
		printf("\n");
	}
	
}
