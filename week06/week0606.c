#include <stdio.h>								//set preprocessor
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int trial=0, guess, answer=24;				//set data type and answer
	
	do											//print "Guess a number" before player guesses
	{
		printf("Guess a number: ");
		scanf("%i", &guess);
		trial++;
		
		if (guess>answer)						//if the player missed, tell whether the guess was too high or too low
		printf("High!\n");
		else if (guess<answer)
		printf("Low!\n");
	}
	while(guess != answer);						//keep asking while the player misses, exit loop when the player guesses correctly
	
	printf("Congratulation! Trials: %i",trial);	//congratulate the player for winning
	
	return 0;									//end function
}
