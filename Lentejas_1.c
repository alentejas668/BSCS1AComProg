#include <stdio.h>
int main(){
	int multipliedNumber, startingValue,endingValue, i;
	
	printf("Enter the number you want to Multiply: ");
	scanf("%d", &multipliedNumber); 
	printf("Enter the Starting Number of the Table: ");
	scanf("%d", &startingValue); 
	printf("Enter the Ending Value of the Table: ");
	scanf("%d", &endingValue);
	
	system("cls"); 
	printf("+=======================================+\n");
	printf("	MULTIPLICATION TABLE\n");
	if(endingValue < startingValue){
		printf("The Ending Value must not be Smaller than the \nStarting Value");
		printf("\nExit the program and please try again\n");
		printf("+=======================================+\n");
		return 0;
	}
	
	else{
		for(i=startingValue; i <= endingValue; i++){
			int product = multipliedNumber * i;
			printf("%d x %d = %d\n",multipliedNumber, i, product);
			
		} 
	}
	printf("+=======================================+\n");
return 0;
}

