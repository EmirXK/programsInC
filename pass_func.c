#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// github.com/EmirXK

void randpass();


int main() {
	srand(time(0));
	
	int loop_index = 0;
	
	while (loop_index < 10) {
		randpass();
		loop_index++;
	}
	printf("\n");
	
	return 0;
}

void randpass() {
	char vowels[] = {"aeiou"};
	char letters[] = {"bcdfghjklmnpqrstvwxyz"};
	char numbers[] = {"123456789"};
	char symbols[] = {"*%!_"};
	
	char password[8];
	int i;
	
	
	int rand_vowel;
		int rand_symbol;
		int rand_letter;
		int rand_num ;
		
		rand_vowel = rand()%5;
		rand_symbol = rand()%4;
		rand_num = rand()%9;
		rand_letter;
		
		password[0] = vowels[rand_vowel];
		
		for (i=1;i<6;i++) {
			rand_letter = rand()%21;
			password[i] = letters[rand_letter];
		}
		password[6] = numbers[rand_num];
		password[7] = symbols[rand_symbol];
		
		for (i=0;i<8;i++) {
			printf("%c",password[i]);
		}
			printf("\n");
}
