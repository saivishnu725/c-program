#include<stdio.h>
main()
{
	int i,sum=0,avg,a[20],n;
	printf(" ENTER THE NUMBER OF STUDENTS " );
	scanf("%d", &n );
	printf("enter the marks of three subjects",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=sum /n;
	printf("sum=%d\n",sum);
	printf("average=%d",avg);
}
