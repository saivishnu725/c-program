#include<stdio.h>
int main(){
	int n, sum, num;
	printf("Enter the number: ");
	scanf("%d", &n);
	sum = 0;
	num = n;
	while(num > 0)
	{
		int rem = num % 10;
		sum += rem;
		num /= 10;
	}
	printf("Sum of the digits is %d ",sum);
	return 0;
}

