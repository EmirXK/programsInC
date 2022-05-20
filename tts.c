#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// github.com/EmirXK

struct Structure{
	char birlik[10][10];
	char onluk[10][10];
} nums;

int main() {
	int array[10];
	
	int j;
	
	char birlik[10][10] = {
	"bir",
	"iki",
	"uc",
	"dort",
	"bes",
	"alti",
	"yedi",
	"sekiz",
	"dokuz",
	};
	char onluk[10][10] = {
	"on",
	"yirmi",
	"otuz",
	"kirk",
	"elli",
	"altmis",
	"yetmis",
	"seksen",
	"doksan",
	};
	
	
	for (j=0;j<10;j++) {
		strcpy(nums.birlik[j], birlik[j]);
		strcpy(nums.onluk[j], onluk[j]);
	}
	
	int len;
	char num[10];
	
	int score;
	
	while (1) {
		printf("\n");
		fgets(num,10,stdin);
	
		len = strlen(num);
		num[len-1] = '\0';
		len = len-1;
		score = atoi(num);
		int i = len;
		
		while(score){
		    i = i-1;
			array[i] = score % 10;
		    score /= 10;
		}
		if (num[0] == '0') {
			array[0] = 0;
		}
		int temp;
		i = 0;
		
		if (array[0] == 0) {
			printf("sifir\n");
		}
		else {
			if (len == 1) {
				for (i=1;i<10;i++) {
					temp = atoi(num);
					if (temp == i) {
						printf("%s\n", nums.birlik[i-1]);
					}
				}
			}
			if (len == 2) {
				for (i=1;i<10;i++) {
					if (array[0] == i) {
						printf("%s ",nums.onluk[i-1]);
					}
				}
				for (i=0;i<10;i++) {
					if (array[1] == i) {
						printf("%s\n",nums.birlik[i-1]);
					}
				}
			}
			if (len == 3) {
				for (i=1;i<10;i++) {
					if (array[0] == i) {
						if (i == 1) {
							printf("yuz ");
						}
						else {
							printf("%s yuz ",nums.birlik[i-1]);
						}
					}
				}
				for (i=1;i<10;i++) {
					if (array[1] == i) {
						printf("%s ",nums.onluk[i-1]);
					}
				}
				for (i=0;i<10;i++) {
					if (array[2] == i) {
						printf("%s\n",nums.birlik[i-1]);
					}
				}
			}
			if (len == 4) {
				for (i=1;i<10;i++) {
					if (array[0] == i) {
						if (i == 1) {
							printf("bin ");
						}
						else {
							printf("%s bin ",nums.birlik[i-1]);
						}
					}
				}
				for (i=1;i<10;i++) {
					if (array[1] == i) {
						if (i == 1) {
							printf("yuz ");
						}
						else {
							printf("%s yuz ",nums.birlik[i-1]);
						}
					}
				}
				for (i=0;i<10;i++) {
					if (array[2] == i) {
						printf("%s ",nums.onluk[i-1]);
					}
				}
				for (i=0;i<10;i++) {
					if (array[3] == i) {
						printf("%s\n",nums.birlik[i-1]);
					}
				}
			}
			if (len == 5) {
				for (i=1;i<10;i++) {
					if (array[0] == i) {
						printf("%s ",nums.onluk[i-1]);
					}
				}
				for (i=0;i<10;i++) {
					if (array[1] == i) {
						if (i==0) {
							printf("bin ");
						}
						else {
							printf("%s bin ",nums.birlik[i-1]);
						}
					}
				}
				for (i=1;i<10;i++) {
					if (array[2] == i) {
						if (i == 1) {
							printf("yuz ");
						}
						else {
							printf("%s yuz ",nums.birlik[i-1]);
						}
					}
				}
				for (i=1;i<10;i++) {
					if (array[3] == i) {
						printf("%s ",nums.onluk[i-1]);
					}
				}
				for (i=0;i<10;i++) {
					if (array[4] == i) {
						printf("%s\n",nums.birlik[i-1]);
					}
				}
			}
			if (len == 6) {
				for (i=1;i<10;i++) {
					if (array[0] == i) {
						if (i == 1) {
							printf("yuz ");
						}
						else {
							printf("%s yuz ",nums.birlik[i-1]);
						}
					}
				}
				for (i=1;i<10;i++) {
					if (array[1] == i) {
						printf("%s ",nums.onluk[i-1]);
					}
				}
				for (i=0;i<10;i++) {
					if (array[2] == i) {
						if (i==0) {
							printf("bin ");
						}
						else {
							printf("%s bin ",nums.birlik[i-1]);
						}
					}
				}
				for (i=1;i<10;i++) {
					if (array[3] == i) {
						if (i == 1) {
							printf("yuz ");
						}
						else {
							printf("%s yuz ",nums.birlik[i-1]);
						}
					}
				}
				for (i=1;i<10;i++) {
					if (array[4] == i) {
						printf("%s ",nums.onluk[i-1]);
					}
				}
				for (i=0;i<10;i++) {
					if (array[5] == i) {
						printf("%s\n",nums.birlik[i-1]);
					}
				}
			}
			if (len > 6) {
				printf("Invalid Input");
				getch();
				return 0;
			}
		}
	}
	
	return 0;
}
