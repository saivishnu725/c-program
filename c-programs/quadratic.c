#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	float r1, r2, real, imag, dis;
	int flag;
	printf("Enter three numbers: ");
	scanf("%f %f %f", &a, &b, &c);
	dis = (b*b) - (4 * a * c);
	printf("Discriminent = %f\n", dis);
	if(dis == 0)
		flag = 1;
	else if(dis > 0)
		flag = 2;
	else
		flag = 3;
	switch(flag)
	{
		case 1:
			printf("Roots are real and equal.\n");
			r1 = r2 = -b / (2.0 * a);
			printf("Root 1 = %f\n", r1);
			printf("Root 2 = %f\n", r2);
			break;
		case 2:
			printf("Roots are real and distinct.\n");
			r1 = (-b + sqrt(dis)) / ( 2.0 * a);
			r2 = (-b - sqrt(dis)) / ( 2.0 * a);
			printf("Root 1 = %f \n", r1);
			printf("Root 2 = %f \n", r2);
			break;
		case 3:
			printf("Imaginary roots.\n");
			real = -b / (2.0 * a);
			imag = sqrt(fabs(dis)) / ( 2.0 * a);
			printf("Root 1 = %f +i %f\n", real, imag);
			printf("Root 2 = %f -i %f\n", real, imag);
			break;
	}
	return 0;
}



/* d = 0
Enter three numbers: 1 2 1
Discriminent = 0.000000
Roots are real and equal.
Root 1 = -1.000000
Root 2 = -1.000000
*/


/* d > 0
Enter three numbers: 3 5 2
Discriminent = 1.000000
Roots are real and distinct.
Root 1 = -0.666667
Root 2 = -1.000000

*/


/* d < 0
Enter three numbers: 3 2 1
Discriminent = -8.000000
Imaginary roots.
Root 1 = -0.333333 +i 0.471405
Root 2 = -0.333333 -i 0.471405

*/
