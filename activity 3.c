#include <stdio.h>
int main(){
	int pin, pinAttempt, attempt = 1, attemptCounter = 3;
	
	printf("Welcome to RCBC Philippines\nTo set up your account, please set your 4 digit PIN: ");
	scanf("%d", &pin);	  

	if(pin <= 999 || pin > 9999){
		printf("Please Set a 4 Digit Pin");
		return 0;
	} 

	system("cls");

	do{   
		printf("=================================================\n");
		printf("Enter Your Pin Attempt %d: ", attempt);
		scanf("%d", &pinAttempt); 
		
		if(pinAttempt <= 999 || pinAttempt > 9999){
			printf("Please Enter a 4 Digit Pin");
			return 0;
		} 
		
		if(pinAttempt == pin){
			printf("=================================================\n");
			printf("PIN Verified, Welcome! What Transactions are we Doing Today?");
			break;
		}	 	   
		if(attempt == 3){
			printf("=================================================\n");
			printf("Account is Locked Please Contact the nearest branch");
			break;
		}	
		attemptCounter--;
		attempt++;
		printf("You have %d remaining Attempts\n", attemptCounter);
	}while(attemptCounter >= 0);
	
return 0;
}

