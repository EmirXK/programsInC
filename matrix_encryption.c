#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// EmirXK

int main() {
	
	char input[10];
	char *ptr_input[10];
	
	int *ptr_i = (int*) calloc(1,4);
	int *ptr_j = (int*) calloc(1,4);
	
	char matrix[3][3] = {
	'A', 'D', 'G',
	'B', 'E', 'H',
	'C', 'F', 'I',
	};
	
	int i;
	int j;
	
	int *ptr_num_matrix[3];
	for (i = 0; i < 3; i++) {
		ptr_num_matrix[i] = (int*)calloc(3 , 4);
	}
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			ptr_num_matrix[i][j] = (i+1)*10 + j+1;
		}
	}
	
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("%c  ", matrix[i][j]);
		}
		printf("\n");
	} 
	printf("\n");
	
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("%d ", ptr_num_matrix[i][j]);
		}
		printf("\n");
	} 
	printf("\n");
	
	for(i=0;i<10;i++) {
		ptr_input[i] = &input[i];
	}
	printf("Input string: ");
	scanf("%s", *ptr_input);
	
	int size = strlen(input);
	printf("Encrypted code: ");
	int k = 0;
	while(k<size) {
		for(i=0;i<3;i++) {
			for(j=0;j<3;j++) {
				if (input[k] == matrix[i][j]) {
					printf("%d ", ptr_num_matrix[i][j]);
				}
			}
		}
		k++;
	}
	
	int num;
	
	loop:
	
	printf("\n");
	printf("Determine how many numbers you're going to enter (max 20): ");
	scanf("%d", &num);
	printf("\n");
	int num_input[num];
	if (num < 21) {
		printf("Start typing the numbers with a space in between\n\n");
		for(i=0;i<num;i++) {
			scanf("%d", &num_input[i]);
		}
	}
	else {
		printf("Input must be lower than 21\n");
		goto loop;
	}
	k=0;
	int temp;
	
	ptr_i = &i;
	ptr_j = &j;
	
	printf("Decrypted code: ");
	while(k<num) {
		temp = num_input[k];
		*ptr_j = temp%10;
		*ptr_i = (temp-j)/10;
		printf("%c", matrix[i-1][j-1]);
		k++;
	}
	
	getch();
	return 0; 
}
