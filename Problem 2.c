#include <stdio.h>
int main(){

	int randomNumber, guessNumber, numberOfGuesses = 1;
	
	printf("Enter a Random Number: ");
	scanf("%d", &randomNumber);
	
	system("cls");
	
	printf("Enter your 1st Guess: ");
	scanf("%d", &guessNumber);
	
	while(guessNumber != randomNumber){
		
		if(guessNumber > randomNumber){
			printf("Enter a Lower number");
		}
		else if(guessNumber < randomNumber){
			printf("Enter a Higher number");
		}
		
		numberOfGuesses++;
		printf("\nGuess number %d: ", numberOfGuesses);
		scanf("%d", &guessNumber);
				
	}
	system("cls");
	printf("The Secret Number is %d, YOU GUESSED IT RIGHT!, \nIt Took You %d guesses", randomNumber, numberOfGuesses);
	
	return 0;
}

