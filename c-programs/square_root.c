#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float sq;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n>0) goto s;
	printf("Enter a positive number!!\n");
	goto end;
	s : 
	sq = sqrt(n);
	printf("Square root of %d = %f", n, sq);
	end: 
	return 0;
}

