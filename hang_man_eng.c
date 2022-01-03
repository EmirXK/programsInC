#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
  
  
  //made by EmirXK
  
  
int main()
{
	
	//declaring variables and array
	
	int rand_num;
	
	srand(time(0));
	
	rand_num = rand() %10;
  
    char words[][16] = {
	"jungle",
	"kosovo",
	"raze",
	"electronic",
	"omega",
	"july",
	"weapon",
	"zebra",
	"technology",
	"physics"};
	
	char cmp[] = "\\n";
	

	int word_length = strlen(words[rand_num]);
	
	
	//                         if we guessed an 'r'
	//                         0 1 2 3 4 5 6 7 8 9 A B
	//                         t e r m o d i n a m i k
	//	guessed_letter[12] = { 0,0,1,0,0,0,0,0,0,0,0,0};
	int guessed_letter[12] = { 0,0,0,0,0,0,0,0,0,0,0,0};
	
	int numCorrect;
	int oldCorrect;
	int lives_num = word_length * 2;
	
	int quit = 0;
	
	int loop_index = 0;
	int result = 10;
	
	char guess[16];
	char entered_letter;
	char last_guess[16];
	
	
	char temp_array[16];
	strcpy(temp_array,words[rand_num]);
	
	
	
	//this part was used for testing, it is now unnecessary.
/*

	printf("words:%s rand_num:%d word_length:%d\n",
			words[rand_num],
			rand_num,
			word_length);
			
*/		
	
	
	
  	while(numCorrect < word_length){
  	

  		for(loop_index = 0; loop_index < word_length; loop_index++){
  			
  			
			
				if(guessed_letter[loop_index] == 1){
					printf("%c",words[rand_num][loop_index]); //this part is the user interface
					continue; 
				} else {
					printf("-"); //shows unfound characters
				}
		  	
			}
			
			printf("\n");
  		
  		printf("Number correct so far:%d\n",numCorrect);
  		printf("Enter a guess letter \n");
  		fgets(guess, 16, stdin);
  		
  		int ln = strlen (guess);
		if ((ln > 0) && (guess[ln-1] == '\n'))
    	guess[ln-1] = '\0';
  			
  		result = strcmp(guess,words[rand_num]);
  	//	fputs(guess,stdout);
  		printf("\n");
  	//	fputs(words[rand_num],stdout);
  		printf("\n");
  			printf("result value: %d\n",result);
  			if ( result == 0 ){
		       break;
			}
			
  		if(strncmp(guess, "quit", 4) == 0){ //the quit mechanism, if you type quit the loop will break.
  			quit = 1;
  			break;
		  }
	
		
		  
		entered_letter = guess[0];
		printf("entered_letter:%c\n",entered_letter);
		
		oldCorrect = numCorrect;
		  
		for(loop_index = 0; loop_index < word_length; loop_index++){
			
				if(guessed_letter[loop_index] == 1){
					continue; // // this line of code prevents the player from cheating by typing the same character
				}
		  	
		  		if(entered_letter == words[rand_num][loop_index]){
		  			guessed_letter[loop_index] = 1;
		  			numCorrect++; //makes us see how many characters we got correctly.
				}
		}
		
		if( oldCorrect == numCorrect ){ //if they are equal that means that numCorrect wasn't incremented, the player should lose a life here.
			lives_num--;
			printf("Wrong guess\n");
			printf("Lives left: %d\n",lives_num);
			if (lives_num == 0) {
				break;
			}
		} else {
			printf("Correct guess\n");
		}
		  
		  
	  }
  	
  	if( quit == 1 ){
  		printf("the user quit early\n");
	  } else if (lives_num == 0 ) {
	  	
	  	printf("LAST CHANCE! TRY TO GUESS THE WORD: "); // The last guess mechanism.
	  	
	 // 	strcat(words[rand_num],cmp); // testing
	  	
	  //	printf("rand_num %s\n",words[rand_num]); 
	  
	  
	  	
	  	fgets(last_guess,16,stdin);
	  	
	 // 	printf ("[%s]\n", last_guess);  //testing
	  	
	    int ln = strlen (last_guess);
		if ((ln > 0) && (last_guess[ln-1] == '\n'))
    	last_guess[ln-1] = '\0';
		
		result = strcmp(last_guess,temp_array);
		
	//	printf("result value:%d\n",result);
  	
		if ( result == 0 ) {
			printf("Congrats! You won!\n");
		} else {
			printf("Sorry, you lost. The word was: %s\n",words[rand_num]);
		}

	  } else {
	  	printf("The word is: %s\nYOU WIN\n",
		       words[rand_num]);
	  }
  	
    return 0;
}
