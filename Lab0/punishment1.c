#include <stdio.h>
	int main()
{
	int num;
	int c;
	printf("Enter the number of lines for the punishment: \n");
	scanf("%d",&num);
	

	if (num>=0){
	for(c=0; c<num; c=c+1){
	printf("C programming language is the best!\n");
	}
}
	else {
	printf("You entered an incorrect value for the number of lines! \n");
}

	return 0;
}
