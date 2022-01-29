#include<stdio.h>
int main()
{
	int i, a[10];
	printf("Enter ten numbers: ");
	for(i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("The elements are : ");
	for(i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	return 0;
}

