#include <stdio.h>
int main(){
	char operator;
	float result, num1, num2;
	
	printf("Enter an Operator: ");
	scanf("%c", &operator);
	printf("\nEnter 1st Number: ");
	scanf("%f", &num1);
	printf("\nEnter 2nd Number: ");
	scanf("%f", &num2);

	switch (operator){
		case '+':
			result = num1 + num2;
			printf("\nResult is: %.2f", result);
		break;
		case '-':
			result = num1 - num2;
			printf("\nResult is: %.2f", result);
		break;
		case '*':
			result = num1 * num2;
			printf("\nResult is: %.2f", result);
		break;
		case '/':
			if (num2 == 0){
				printf("Cannot divide by 0");
			}
			else{
				result = num1 / num2;
				printf("\nResult is: %.2f", result);
			}
		break;
		default:
			printf("Enter A Valid Operator");
	}	
	return 0;
}

