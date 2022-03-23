#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define SIZE 30

// github.com/EmirXK

void char_finder(char array[], char single_char, int *num_array[]) {
	int i;
	int counter = 0;
	for (i=0; i<strlen(array); i++) {
		if (array[i] == single_char) {
			*num_array[i] = 1;
			counter++;
		}
	}
	printf("\nTimes this letter was found in the string: %d\n", counter);
}

int main() {
	char string[SIZE];
	int num_array[SIZE];
	int *num_ptr[SIZE];
	printf("Input a string: ");
	fgets(string,SIZE,stdin);
	int i;
	for (i=0; i<strlen(string); i++) {
		string[i] = tolower(string[i]);
		num_array[i] = 0;
		num_ptr[i] = &num_array[i];
	}
	char letter;
	printf("Input a letter: ");
	scanf("%c", &letter);
	letter = tolower(letter);
	char_finder(string, letter, num_ptr);
	for (i=0; i<strlen(string); i++) {
		if (num_array[i] == 1) {
			printf("Letter found in index[%d]\n",i);
		}
	}
	getch();
	return 0;
}
