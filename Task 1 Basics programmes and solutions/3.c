       /* 3. Write a C programme to enter length and breadth of a rectangle and find its perimeter.
	hint:
	Perimeter of rectangle is given by the below formula
	Perimeter of rectangle = 2(l + w)
	Where l is length and w is the width of rectangle.
	out put:
	Enter length of the rectangle: 5
	Enter width of the rectangle: 10
	Perimeter of rectangle = 30.000000 */

#include<stdio.h>
void main(void){
	float a,b,p;

	printf("Enter length of the rectancle: ");
	scanf("%f",&a);
	printf("Enter width of the rectangle: ");
	scanf("%f",&b);
	p=2*a+2*b;
	printf("Perimeter of rectangle = %f",p);

	getch();
	clrscr();
}
