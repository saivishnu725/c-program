#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	printf("Enter a character: ");
	ch = getch();
	switch( ch )
	{
		case 'a' :
			printf("It is a vowel.\n");
			break;
		case 'e' :
			printf("It is a vowel.\n");
			break;
		case 'i' :
			printf("It is a vowel.\n");
			break;
		case 'o' :
			printf("It is a vowel.\n");
			break;
		case 'u' :
			printf("It is a vowel.\n");
			break;
		default :
			printf("It is not a vowel.\n");
			break;
	}
	return 0;
}

