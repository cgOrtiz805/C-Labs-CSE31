#include <stdio.h>
	int main()
{
	int num;
	int c;
	int typo;
	printf("Enter the number of lines for the punishment: ");
	scanf("%d",&num);
	

	if (num>=0){
	printf("Enter the line for which we want to make a typo: ");
	scanf("%d",&typo);
	}
	else{
	  printf("You entered an incorrect value for the number of lines! ");
	}


	typo=typo-1;
	if(typo<=num&&typo>=0){

	 for(c=0; c<num; c++)
	  if(c==typo){
		printf("C programming language is the bet! \n");
	}
	else {

	printf("C programming language is the best!\n");
	}
	}

	else {
	printf("You entered an incorrect value for the number of lines!");
}

	return 0;
}
