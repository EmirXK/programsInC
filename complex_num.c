#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// github.com/EmirXK

void sum (char num1[10], char num2[10], int properties) {
	int temp;
	int temp2;
	
	if (properties == 1) {
		temp = atoi(num1);
		temp2 = atoi(num2);
		printf("%d\n", temp+temp2);
	}
	if (properties == 2 || properties == 3) {
		printf("%s",num1);
		printf("+");
		printf("%s",num2);
	}
	if (properties == 4) {
		temp = atoi(num1);
		temp2 = atoi(num2);
		printf("%d", temp+temp2);
		printf("i");
	}
}
	
	
int main() {
	char num1[10];
	char num2[10];
	
	int *is_complex = (int*) calloc(2,sizeof(int));
	
	is_complex[0] = 0;
	is_complex[1] = 0;
	int properties = 0;
	
	printf("Enter first number: ");
	fgets(num1,10,stdin);
	printf("\nEnter second number: ");
	fgets(num2,10,stdin);
	
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	
	num1[len1-1] = '\0';
	num2[len2-1] = '\0';
	
	int i;
	
	for (i=0;i<len1;i++) {
		if (strchr(num1, 'i') != NULL) {
			is_complex[0] = 1;
		}
	}
	for (i=0;i<len2;i++) {
		if (strchr(num2, 'i') != NULL) {
			is_complex[1] = 1;
		}
	}
	
	if (is_complex[0] == 0 && is_complex[1] == 0) {
		properties = 1;
	}
	if (is_complex[0] == 1 && is_complex[1] == 0) {
		properties = 2;
	}
	if (is_complex[0] == 0 && is_complex[1] == 1) {
		properties = 3;
	}
	if (is_complex[0] == 1 && is_complex[1] == 1) {
		properties = 4;
	}
	
	if (properties == 0) {
		printf("Unexpected error\n");
		return 0;
	}
	
	printf("\nResult: ");
	sum (num1,num2,properties);
	
	getch();
	return 0;
}
