#include<stdio.h>
int main(){
	int sal, bon;
	printf("Enter the salary: ");
	scanf("%d", &sal);
	bon = ( sal >= 20000 ) ? 5000 : 3000;
	printf("Bonus = %d", bon);
	return 0;
}

