#include<stdio.h>
main()
{
	int number,rem,originalnum;
	int sum=0,rev=0;
	printf("enter numbers: ");
	scanf("%d",&number);
	originalnum=number;
	while(number>0)
	{
		rem=number%10;
		sum=sum+rem;
		rev=rev*10+rem;
		number=number / 10;
	}
	printf("%d\n", sum);
	printf("%d\n", rev);
	if (originalnum == rev)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not a palindrome\n");
	}
	
}
