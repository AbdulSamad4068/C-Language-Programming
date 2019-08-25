/*16. Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
output:
Enter three sides of triangle: 30
30
30
Equilateral triangle
Logic:
A triangle is said Equilateral Triangle, if all its sides are equal. If a, b, c are three sides of triangle. Then, the triangle is equilateral only if a == b == c.
A triangle is said Isosceles Triangle, if its two sides are equal. If a, b, c are three sides of triangle. Then, the triangle is isosceles if either a == b or a == c or b == c.
A triangle is said Scalene Triangle, if none of its sides are equal. */

#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	printf("Enter three sides of triangle: ");
	scanf("%d %d %d",&a,&b,&c);

	if(a+b>c && a+c>b && b+c>a)
       {
		if(a==b && b==c)
		printf("Equilateral triangle");

		else if((a==b)||(a==c)||(b==c))
		printf("Isosceles triangle");

		else
		printf("Scalene triangle");
	}

	else
	printf("Triangle is not valid.");

	getch();
	clrscr();
}