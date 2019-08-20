     /*14. Write a C program to calculate area of an equilateral triangle.
	output:
	Enter side of an equilateral triangle: 75
	Area of equilateral triangle = 2435.69 sq. units */

#include<stdio.h>    
main(){
	float a;
	printf("Enter side of an equilateral triangle: ");
	scanf("%f",&a);

	printf("Area of equilateral triangle= %.2f sq. units",0.4330127019*a*a);

	getch();
	clrscr();
}
