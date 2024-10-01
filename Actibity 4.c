#include <stdio.h>
int main(){
	int n,number, oddNumberTotal = 0, evenNumberTotal = 0;
	printf("==============================================\n");
	printf("	Instructions: Enter 10 Digits");
	printf("\n==============================================\n");
	for(n=1; n<=10; n++){
		printf("	Enter a Number %d: ", n);
		scanf("%d", &number);
		
		if(number % 2 == 0){
			evenNumberTotal = evenNumberTotal + number; 
		}
		else if(number % 2 == 1){
			oddNumberTotal = oddNumberTotal + number; 
		}
	}
	
	printf("==============================================\n");
	printf("	Total of Even numbers is %d", evenNumberTotal);
	printf("\n	Total of Odd numbers is %d", oddNumberTotal);
	printf("\n==============================================\n");
	printf("	What it Does?\n");
	printf("	It adds odd and even numbers separately");
	printf("\n==============================================\n");	
return 0;
}

