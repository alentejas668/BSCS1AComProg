#include <stdio.h>
int main(){
	int i = 1, a, numberOfAbove50 = 0, initialGrade = 0, grade, classAboveAverage = 0;
	float classAverage;
	
		do{
			printf("Enter grade of Student %d: ", i);
			scanf("%d", &grade);
			for(a = grade; a > 100 || a < 0; a++){
				system("cls");
				printf("Enter A Number between 0-100!");
				return 0;
			}
			initialGrade = initialGrade + grade;
			classAverage = initialGrade / 6;
			i++;
			if(grade >= 50){
				numberOfAbove50++;
			}	 
		}while(i<=6);	
	system("cls"); 
	printf("\n+===========================================+\n");
	printf("Class Average is: %.2f", classAverage);
	printf("\nNumber of Students scoring above average: %d", classAboveAverage);
	if(numberOfAbove50 >= 3){     	   
		printf("\nClass Performance: Passed!");
	}
	else{
		printf("\nClass Performance: Failed!");
		}
	printf("\n+===========================================+\n");
return 0;
}

