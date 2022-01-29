#include<stdio.h>
int main()
{
	int b,h;
	float ar;
	printf("Enter the base and height of a triangle: ");
	scanf("%d %d",&b,&h);
	ar = 0.5 * b * h;
	printf("Area of triangle is  %f", ar );
	return 0;
}
