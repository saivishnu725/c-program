#include<stdio.h>
int main(){
	int l, b, area;
	printf("Enter the length and breadth of the rectangle: ");
	scanf("%d %d", &l, &b);
	area = l * b;
	printf("Area of rectangle = %d", area);
	return 0;
}

