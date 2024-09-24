#include <stdio.h>
int main(){
	char firstName[20];
	char lastName[20];
	int idNumber;
	float creditCost, creditHours, GPA, discountPercentage, discount, tuition;
	
	printf("\nEnter First Name: ");
		scanf("%s", &firstName);
	printf("\nEnter Last Name: ");
		scanf("%s", &lastName);
	printf("\nEnter ID Number: ");
		scanf("%d", &idNumber);
	printf("\nEnter  Number of Credits in Hours: ");
		scanf("%f", &creditHours);
	printf("\nEnter  GPA (5 point GPA): ");
		scanf("%f", &GPA);	  
	
	if(GPA >= 3.5){
		if(creditHours >= 15){
			discountPercentage = 0.20;
		}
		else if(creditHours >= 10 && creditHours < 15){
			discountPercentage = 0.10;
		}
		else if(creditHours < 10){
			printf("\n==========================");
			printf("\nNO DISCOUNT");
		}
	}
	
	creditCost = 300 * creditHours;
	discount = creditCost * discountPercentage;
	tuition = creditCost - discount;
	
	printf("\n==========================");
	printf("\nStudent Name: %s %s", firstName, lastName);
	printf("\nID Number: %d", idNumber);
	printf("\n==========================");
	printf("\nInitial Tuition Fee $%.2f", creditCost);
	printf("\nDiscount Applied: $%.2f", discount);
	printf("\nFinal Tuition Fee: $%.2f", tuition);
	printf("\n==========================");
	printf("\nEnd of Calculation");
	printf("\n==========================");
	return 0;	 
}

