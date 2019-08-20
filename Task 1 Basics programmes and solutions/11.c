	/* 11. Write a C programme to enter any number and calculate its square root.
	output:
	Enter any number to to find square root:
	Square root of 144.00 = 12.00 */

#include<stdio.h>
#include<math.h>
 main(){
	float a,r;

	printf("Enter any number to find square root: ");
	scanf("%f",&a);

	r=pow(a,1.0/2.0);
	printf("\nSquare root of %.2f = %.2f",a,r);

	getch();
	clrscr();
 }