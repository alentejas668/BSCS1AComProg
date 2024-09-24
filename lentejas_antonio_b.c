#include <stdio.h>
int main(){
	char firstName[20], lastName[20];
	float yearsDriving, carAge, basePremium = 1000.00, surcharge, surchargePercent,discountPercent, discount, finalPremium, initialFinal;
	
		printf("\nEnter First Name: ");
			scanf("%s", &firstName);
		printf("\nEnter Last Name: ");
			scanf("%s", &lastName);
		printf("\nEnter Years of Driving Experience: ");
			scanf("%f", &yearsDriving);	          		        
		printf("\nEnter Age of the Vahicle: ");
			scanf("%f", &carAge);
          	      
	  
		if(carAge > 10){
			surchargePercent = .10;
			surcharge = basePremium * surchargePercent;
			initialFinal = basePremium + surcharge;
		}
		else if(carAge <= 10 && carAge>= 5){
			surchargePercent = .05;
			surcharge = basePremium * surchargePercent;
			initialFinal = basePremium + surcharge;
		}
		else if(carAge < 5){
			printf("\n===============================");
			printf("\nNO SURCHARGE"); 
		}
		
		if(yearsDriving > 10){
			discountPercent = .15;
			discount = initialFinal * discountPercent;
		}
		else if(yearsDriving <= 10 && carAge>= 5){
			discountPercent = .10;
			discount = initialFinal * discountPercent;
		}
		else if(yearsDriving < 5){
			printf("\n===============================");
			printf("\nNO DISCOUNT"); 
		}
		
		finalPremium = initialFinal - discount;
		
		printf("\n===============================");
		printf("\nDriver's Name: %s %s", firstName, lastName);
		printf("\n===============================");
		printf("\nBase Premium: %.2f", basePremium);
		printf("\nSurcharge Applied: %.2f", surcharge);
		printf("\nDiscount Applied: %.2f", discount);
		printf("\n===============================");
		printf("\nFinal Premium: %.2f", finalPremium);
		printf("\n===============================");
		printf("\nEND OF CALCULATION");
		printf("\n===============================");
	
	return 0;	 
}

