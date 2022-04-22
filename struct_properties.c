#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// github.com/EmirXK

void Func();

struct Struct {
	char text[20];
	int length;
	int vowels;
	int consonants;
	int numbers;
} Info;

int main() {
	Func();
	printf("\nText: %s",Info.text);
	printf("Length: %d\n",Info.length);
	printf("Numbers: %d\n",Info.numbers);
	printf("Vowels: %d\n",Info.vowels);
	printf("Consonants: %d\n",Info.consonants);
	return 0;
}

void Func(void) {
	printf("User input: ");
	char temp[20];
	fgets(temp,20,stdin);
	strcpy(Info.text,temp);
	Info.length = strlen(Info.text);
	temp[Info.length-1] = '\0';
	Info.length--;
	int i,j,k,m,n=0;
	char num_temp[20];
	for (i=0;i<Info.length;i++) {
		temp[i] = tolower(temp[i]);
	}
	char vowels[] = "aeiou";
	char consonants[] = "bcdfghjklmnpqrstvwxyz";
	char nums[] = "1234567890";
	int num;
	
	for (i=0;i<Info.length;i++) {
		for (j=0;j<5;j++) {
			if (temp[i] == vowels[j]) {
				Info.vowels++;
			}
		}
		for (k=0;k<21;k++) {
			if (temp[i] == consonants[k]) {
				Info.consonants++;
			}
		}
		for (m=0;m<10;m++) {
			if (temp[i] == nums[m]) {
				num_temp[n] = temp[i];
				n++;
			}
		}
	}
	Info.numbers = atoi(num_temp);
}
