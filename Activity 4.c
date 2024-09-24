#include <stdio.h>
	int main(){
		float quiz, midterm, finals, project, finalGrade;
		char firstName[20], lastName[20], letterGrade;
		
		printf("Enter First Name: ");
		scanf("%s", &firstName);
		printf("\nEnter Last Name: ");
		scanf("%s", &lastName);
		
		printf("\nEnter Quiz Score out of 100: ");
		scanf("%f", &quiz);
		printf("\nEnter midterm Score out of 100: ");
		scanf("%f", &midterm);
		printf("\nEnter finals Score out of 100: ");
		scanf("%f", &finals);
		printf("\nEnter project Score out of 100: ");
		scanf("%f", &project);
		
		finalGrade = (quiz * 0.20)+ (midterm * 0.30)+ (finals * 0.40)+ (project * 0.10);
		
		if(finalGrade >= 90){
			letterGrade = 'A';
			printf("\n=======================");
			printf("\nGood Job!");
		}
		else if(finalGrade >= 80 && finalGrade <= 89){
			letterGrade = 'B';
			printf("\n=======================");
			printf("\nGood Enough");
		}
		else if(finalGrade >= 70 && finalGrade <= 79){
			letterGrade = 'C';
			printf("\n=======================");
			printf("\nAverage");
		}
		else if(finalGrade >= 60 && finalGrade <= 69){
			letterGrade = 'D';
			printf("\n=======================");
			printf("\nPassed");
		}
		else{
			letterGrade = 'F';
			printf("\n=======================");
			printf("\nBetter Luck Next Time");
		}	     	   

		printf("\n|Student Name: %s %s <3", firstName, lastName);
		printf("\n|Final grade is %.2f <3", finalGrade);
		printf("\n|The grade is %c :O", letterGrade);
		printf("\n=======================");	
	return 0;	 
}

