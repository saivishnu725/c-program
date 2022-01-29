#include<stdio.h>
int main()
{
	int i, sum = 0, a[20], n, avg;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	printf("Enter the marks of %d students\n", n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i = 0; i< n; i++)
		sum += a[i];
	avg = sum / n;
	printf("Sum = %d\n", sum);
	printf("Average = %d\n", avg);
	return 0;
}



/*
Enter the number of students: 3
Enter the marks of 3 students
1 2 3
Sum = 6
Average = 2

*/
