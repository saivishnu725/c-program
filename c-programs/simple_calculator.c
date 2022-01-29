#include<stdio.h>
int main(){
	int a, b, sum, diff, prod, quo, rem;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("Sum = %d\n", sum);
	diff = a - b;
	printf("Difference = %d\n", diff);
	prod = a * b;
	printf("Product = %d\n", prod);
	quo = a / b;
	printf("Quotient = %d\n", quo);
	rem = a % b;
	printf("Reminder = %d\n", rem);
	return 0;
}

