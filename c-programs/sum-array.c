#include<stdio.h>
int main()
{
	int i = 0, a[100], sum = 0;
	while(1)
	{
		printf("%d. Enter the number (999  to stop): ", i+1);
		scanf("%d", &a[i]);
		if(a[i] == 999)
			break;
		i++;
	}
	printf("Length of array = %d\n", (i+1));
	i--;
	while(i>=0)
	{
		if(a[i] > 0)
			sum += a[i];
		i--;
	}
	printf("Sum of positive numbers = %d", sum);
	return 0;
}

