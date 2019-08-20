      /* 4. Write a C programme to enter length and breadth of a rectangle and find its area.
	hint:
	Area of a rectangle is given by the formula -
	A=lw
	Where l is length and w is width of the rectangle.
	out put:
	Enter length of rectangle: 5
	Enter width of rectangle: 10
	Area of rectangle = 50.000000 sq. units */

#include<stdio.h>
 main(){
	float a,b,area;

	printf("Enter length of rectancle: ");
	scanf("%f",&a);
	printf("Enter width of rectangle: ");
	scanf("%f",&b);

	printf("Area of rectangle = %f sq. units",a*b);

	getch();
	clrscr();
}
