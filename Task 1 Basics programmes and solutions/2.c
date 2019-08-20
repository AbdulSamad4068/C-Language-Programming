	/* 2. Write a C programme to enter two numbers and perform all arithmetic operations.
out put:
Enter any two numbers : 20 10
SUM = 30
DIFFERENCE = 10
PRODUCT = 200
QUOTIENT = 2.000000
MODULUS = 0 */

#include<stdio.h>
main(){

	float a,b;

	printf("Enter any two numbers : ");
	scanf("%f%f",&a,&b);
	printf("SUM = %.0f\nDIFFERENCE = %.0f\nPRODUCT = %.0f\nQUOTIENT = %f",a+b,a-b,a*b,a/b);

	getch();
	clrscr();
}
