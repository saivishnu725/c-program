#include<stdio.h>

int main()
{
	int perc;
	printf("Enter the percentage: ");
	scanf("%d", &perc);
	if(perc >= 80)
		printf("You passed with Distinction.");
	else if( perc >= 60)
		printf("You passed with First Class.");
	else if (perc >= 35)
		printf("You passed with Second Class.");
	else
		printf("You failed the class!!");
	return 0;
}

