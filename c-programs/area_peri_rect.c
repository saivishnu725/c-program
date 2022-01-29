#include<stdio.h>
// area = l * b
// perimeter = 2 * ( l + b )
int main(){
	int l, b, area, peri;
	printf("Enter the length and breadth of rectangle: ");
	scanf("%d %d", &l, &b);
	area = l * b;
	peri = 2 * ( l + b );
	printf("Area = %d \n", area);
	printf("Perimeter = %d ", peri);
	return 0;
}
