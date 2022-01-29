#include<stdio.h>
#include<conio.h>

int isprime(int x)
{
  int i,c=0;

  for(i=1;i<=x;i++)
  if(x%i==0)
  c++;

  if(c==2)
  return 1;
  else
  return 0;
}

  void main()
{
  int n;
  printf("enter any number");
  scanf("%d",&n);
  
  if(isprime(n))
       printf("%d is a prime number",n);
       else
       printf("%d is not a prime number",n);
  
}
