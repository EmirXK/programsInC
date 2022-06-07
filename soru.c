#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct x {
	char name[10];
} students;

int i;
int x;

int main() {
	srand(time(0));
	x = rand() % 2 + 2;
	x=2*x;
	char names[3][10] = {
	"Emir",
	"Eray",
	"Mert",
	};
	x=x+2;
	students list[3];
	x=x/2;
	for (i=2;i>=0;i--) {
		strcpy(list[i].name,names[i]);
	} x=x-x/2;
	printf("%s", list[x].name);
	
	return 0;
}

