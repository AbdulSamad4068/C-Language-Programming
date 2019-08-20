	/* 17.Write a C programme to find the square of the sum of two numbers.
	output:
	Enter first no = 4
	Enter second no = 2
	whole square of (4+2) = 36 */

#include<stdio.h>
main() {
	int a;
	int b;
	int r;
	printf("Enter first no = ");
	scanf("%d",&a);

	printf("enter second no = ");
	scanf("%d",&b);
	r=(a*a)+2*a*b+(b*b);
	printf("whole square of (%d+%d) = %d",a,b,r);

	getch();
	clrscr();

}