#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// github.com/EmirXK

typedef struct Structure {
	
	int student_number;
	int answers[20];
	int empty_num;
	int correct_num;
	int false_num;
	
	char name[10];
	
} student;

int main() {
	
	char names[10][20] = {
	"Emir      ",
	"Yunus Ege ",
	"Tarik     ",
	"Davutcan  ",
	"Omer      ",
	"Metehan   ",
	"Bora      ",
	"Melih     ",
	"Tugra     ",
	"Mehmet Ali",
	};
	
	FILE *fptr;
	
	fptr = fopen("text.txt", "w");
	fprintf(fptr, "Name\tStudent_num\tCorrect_num\tFalse_num\tEmpty_num\n");
	
	srand(time(0));
	student students[10];
	int i,j;
	int answer_sheet[20];
	
	int number = 1000;
	
	for (i=0;i<10;i++) {
		students[i].empty_num = 0;
		students[i].correct_num = 0;
		students[i].false_num = 0;
		students[i].student_number = number;
		number++;
		strcpy(students[i].name,names[i]);
		for(j=0;j<20;j++) {
			students[i].answers[j] = rand() %5;
		}
	}
	
	for (i=0;i<20;i++) {
		answer_sheet[i] = rand() %4 + 1;
	}
	
	for (i=0;i<10;i++) {
		for(j=0;j<20;j++) {
			if (students[i].answers[j] == 0) {
				students[i].empty_num++;
			}
			else if (students[i].answers[j] == answer_sheet[j]) {
				students[i].correct_num++;
			}
			else {
				students[i].false_num++;
			}
		}
	}
	
	for (i=0;i<10;i++) {
		fprintf(fptr,"%s\t%d\t\t%d\t\t%d\t\t%d\n",students[i].name,students[i].student_number,students[i].correct_num,students[i].false_num,students[i].empty_num);
	}
	
	printf("answer key:\n         ");
	for(i=0;i<20;i++)
	printf("%d ",answer_sheet[i]);
	
	printf("\n\nAnswers for each student:\n");
	
	for (i=0;i<10;i++) {
		printf("\n\nStudent NO: %d\nAnswers: ",students[i].student_number);
		for (j=0;j<20;j++) {
			printf("%d ",students[i].answers[j]);
		}
	}
	
	printf("\n\nProgram finished working");
	
	return 0;
}
