//https://www.transfer.sh/YQ64Qy/fibnocci.c
#include<stdio.h>
int main()
{
	int a1 = 2, a2 = 3, sum = 2, temp, n, i;
	printf("Enter the count: ");
	scanf("%d", &n);
	printf("0 1");
	if(n == 1){
		printf("\nSum = 1");
	}
	else if(n == 2){
		printf(" 1 ");
		printf("\nSum = 2");
	}
	else
	{
		printf(" 1");
		for(i = 3; i <= n; i++)
		{
			sum += a1;
			temp = a2 + a1;
			printf(" %d", a2);
			a1 = a2;
			a2 = temp;
		}
		printf("\nSum = %d", sum);
		return 0;
	}
} 
