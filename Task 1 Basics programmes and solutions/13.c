 /* 13. Write a C program to enter base and height of a right triangle and find its area.
	output:
	Enter base of the triangle: 10
	Enter height of the triangle: 15
	Area of the triangle = 75.00 sq. units*/

#include<stdio.h>
 main(){
	float a;
	float b;

	printf("Enter base of the triangle: ");
	scanf("%f",&a);
	printf("Enter height of the triangle: ");
	scanf("%f",&b);

	printf("\nArea of the triangle = %.2f sq.units",0.5*a*b);

	getch();
	clrscr();
}
