#include<stdio.h>
int main(){
	int x, y;
	first :
		printf("Enter two values: ");
		scanf("%d %d", &x, &y);
		if( x > y )
		{
			printf("First value is greater. Try again!\n");
			goto first;
		}
		printf("Second value is greater.");
	return 0;
}

