/*15. Write a C program to input all sides of a triangle and check whether triangle is valid or not.
output
Enter three sides of triangle: 7
4
10
Triangle is valid
logic:
A triangle is valid if sum of its two sides is greater than the third side. Means if a, b, c are three sides of a triangle. Then the triangle is valid if all three conditions are satisfied
a + b > c
a + c > b and
b + c > a */

#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	printf("Enter three sides of triagle: ");
	scanf("%d %d %d",&a,&b,&c);

	if(a+b>c && a+c>b && b+c>a)
	printf("Triangle is valid.");
	else
	printf("Triangle is not valid.");

	getch();
	clrscr();
}