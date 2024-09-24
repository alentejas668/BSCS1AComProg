#include <stdio.h>
	int main(){
		int A,B,C;
		
		printf("Enter First Number: \n");
		scanf("%d", &A);
		printf("Enter Second Number: \n");
		scanf("%d", &B);
		printf("Enter Third Number: \n");
		scanf("%d", &C);
		
		if(A>B){
			if(A>C){
				printf("A is largest");
			} else{
				printf("C is largest");
			}
		}else if(B>C){
			printf("B is largest");
		}else{
			printf("C is largest");
		}	 
	return 0;
}

