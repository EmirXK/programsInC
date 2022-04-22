#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// github.com/EmirXK

int replace( char *s, char a, char b);

int main() {
	char s[] = "test";
	int len=0;
	int i = 0;
	char a = 't';
	char c = 'z';
	printf("N: %d ",replace(s,a,c));
	return 0;
}

int replace( char *s, char a, char b) {
	int i=0;
	int num=0;
	while (s[i]!='\0') {
		if(s[i]==a) {
			s[i]=b;
			num++;
		}
		i++;
	}
	printf("%s\n",s);
	return num;
}
