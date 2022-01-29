#include<stdio.h>
int main()
{
	int m1, m2, m3;
	printf("Enter three subject marks: ");
	scanf("%d %d %d", &m1, &m2, &m3);
	float avg = (m1 + m2 + m3) / 3.0;
	printf("Average = %f", avg);
	return 0;
}
