#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#define SIZE 30

// github.com/EmirXK

int main() {
	char string[SIZE];
	printf("Input the string(max %d characters): ",SIZE);
	fgets(string,SIZE,stdin);
	int i;
	for (i=0;i<strlen(string);i++) {
		string[i] = tolower(string[i]);
	}
	int j;
	int temp;
	for (i=0; i<strlen(string); i++) {
		for (j=0; j<strlen(string); j++) {
			if (string[i] < string[j]) {
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}		
		}
	}
	printf("\nLowercase string in alphabetical order: %s",string);
	getch();
	return 0;
}
