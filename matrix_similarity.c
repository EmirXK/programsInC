#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

// EmirXK

int main() {
	
	srand(time(0));
	
	// rand_arr row-column info
	int r = 10;
	int c = 10;
	
	int i;
	int j;

	int *rand_matrix[r];
	for (i = 0; i < r; i++) {
		rand_matrix[i] = (int*)calloc(c , 4);
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			rand_matrix[i][j] = rand() %2;
		}
	}
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++){
			printf("%d ", rand_matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	int *ptr_debug_arr[8*8];
	
	int *ptr_i = (int*) calloc(1,4);
	int *ptr_j = (int*) calloc(1,4);
	printf("\n\n");
	
	int ref_matrix[3][3] = {
		0, 1, 0,
		0, 1, 0,
		1, 1, 1,
	};
	
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			printf("%d ",ref_matrix[i][j]);
		}
		printf("\n");
	}
	
	int k;
	int t;
	
	i=0;
	j=0;
	
	int check = 0;
	int max = 0;
	int max_num = 1;
	int temp;
	
	int coords[2];
	int counter = 0;
	int debug[8*8];
	
	for (i=0;i<8*8;i++) {
		ptr_debug_arr[i] = &debug[i];
		*ptr_debug_arr[i] = 0;
	}
	
	for (i=0;i<8;i++) {
		for (j=0;j<8;j++) {
				*ptr_debug_arr[counter] = check;
				counter++;
				check = 0;
			for (k=i;k<i+3;k++) {
				for (t=j;t<j+3;t++) {
					if (rand_matrix[k][t] == ref_matrix[k-i][t-j]) {
						check++;
					}
					if (check == max) {
						max_num++;
					}
					temp = max;
					if (check > max) {
						max = check;
						coords[0] = i;
						coords[1] = j;
					}
					if (temp != max) {
						max_num = 1;
					}
					if (check == 9) {
						printf("\n\n(0,0) Coordinate of the 3x3 matrix: row = %d , column = %d \n",i,j);
						coords[0] = i;
						coords[1] = j;
						goto end; 		//goto is a viable escape tool in deep nested loops
					}
				}
			}
		}
		if (i==7 && max<9) {
			printf("\n\n(0,0) Coordinate of the 3x3 matrix: row: %d , column: %d\n",coords[0],coords[1]);
			if (max_num == 0) {
				max_num++;
			}
		}
	}
	end:
		
	printf("MAX: %d\n",max);
	i = coords[0];
	j = coords[1];
	
	ptr_i = &i;
	ptr_j = &j;
	
	printf("The closest figure to the original matrix: \n\n");
	for (k=*ptr_i;k<*ptr_i+3;k++) {
		for (t=*ptr_j;t<*ptr_j+3;t++) {
			printf("%d ", rand_matrix[k][t]);
		}
		printf("\n");
	}
	printf("\nNumber of matrices that are alike: %d\n",max_num);
	
	int input;
	printf("\n\n");
	printf("Input 1 if you want to see the debug menu: \n");
	scanf("%d", &input);
	if (input == 1) {
		for (i=0;i<8*8;i++) {
			printf("check: %d\n",debug[i]);
		}
		printf("\n\n");
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++){
				printf("%p ", (*(rand_matrix+i)+j));
			}
			printf("\n");
		}
	}
	
	getch();
	return 0;
}
