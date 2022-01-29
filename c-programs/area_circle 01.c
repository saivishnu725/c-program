#include<stdio.h>
int main()
{
	int r;
	float a, c;
	printf("Enter radius of the circle: ");
	scanf("%d", &r);
	a = 3.14 * r * r;
	c = 3.14 * r * 2;
	printf("Area = %f\n", a);
	printf("Circumference = %f\n", c);
	return 0;
}

