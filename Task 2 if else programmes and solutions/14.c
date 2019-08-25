/*14. Write a C program to input angles of a triangle and check whether triangle is valid or not.
hint: any triangle is zero considered or not valid
if sum of all triagles must be 180
output:
Enter three angles of triangle:
30
60
90
Triangle is valid. */

#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	printf("Enter three angles of triagle:\n");
	scanf("%d %d %d",&a,&b,&c);

	if(a+b+c==180)
	printf("Triangle is valid.");
	else
	printf("Triangle is not valid.");

	getch();
	clrscr();
}