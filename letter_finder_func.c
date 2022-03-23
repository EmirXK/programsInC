#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define SIZE 30

// github.com/EmirXK

void char_finder(char array[], char single_char) {
	int i;
	int first = 0;
	int counter = 0;
	for (i=0; i<strlen(array); i++) {
		if (array[i] == single_char) {
			if (first == 0){
				printf("First occurrence on index[%d]\n",i);
				first = 1;
			}
			counter++;
		}
	}
	printf("\nTimes this letter was found in the string: %d", counter);
}

int main() {
	char string[SIZE];
	printf("Input a string: ");
	fgets(string,SIZE,stdin);
	int i;
	for (i=0; i<strlen(string); i++) {
		string[i] = tolower(string[i]);
	}
	char letter;
	printf("Input a letter: ");
	scanf("%c", &letter);
	letter = tolower(letter);
	char_finder(string, letter);
	getch();
	return 0;
}
