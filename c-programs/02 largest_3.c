#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a, &b, &c);
	if(a >= b && a >= c)
		printf("%d is the largest numbers",a);
	else if(b >= a && b >= c)
		printf("%d is the largest numbers",b);
	else if(c >= a && c >= b)
		printf("%d is the largest numbers",c);
	return 0;
}
