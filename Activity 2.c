#include <stdio.h>
   int main(){
      int one, two, three;
	  int response=0;  
	  do {
		  	printf("Enter a first side: \n");
      		scanf("%d", &one);
			printf("Enter a second side: \n");
      		scanf("%d", &two);
			printf("Enter a third side: \n");
      		scanf("%d", &three);
			
	      if (one == two && one == three && two == three){
	         printf("Equilateral");
	      } else if(one == two || one == three || two == three){
	         printf("Isosceles");
	      } else{
	         printf("Scalenes");
	      }
		  
		  printf("\nContinue? 1 for yes 0 for no: \n");
      	  scanf("%d", &response);
		  
	  } while (response>0);
	  
   return 0;
}

