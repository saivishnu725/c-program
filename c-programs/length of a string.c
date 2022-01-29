#include<stdio.h>
 void main()
 {
 	char str[100];
 	int len=0;
 	printf("enter a string:");
 	gets(str);
 	while(str[len]!='\0')
 	     len++;
 	     printf("\n the length of the string is %d",len);
 }                                                    
 
