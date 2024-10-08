#include <stdio.h>
int main(){
	int i, a, limit;
	
	do{
		printf("Enter a positive Integer between 2 and 10: ");
		scanf("%d", &limit);
	}while(limit < 2 || limit >10);
	system("cls");
	printf("========================\n");
	for(i = 1;i <= limit; i++){
		for(a = 1; a<=i; a++){
			printf("%d ", a);
		}
		printf("\n", a);
	}
	printf("========================");
return 0;
}

