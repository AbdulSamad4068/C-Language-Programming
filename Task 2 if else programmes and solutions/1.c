	/*1. Write a C program to find maximum between two numbers.
	out:
	Enter two numbers: 10
	12
	12 is maximum */

#include<stdio.h>
 main(){
	int a;
	int b;

	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);

	if(a>b)
	{
	printf("%d is maximum",a);
	}
	else
	{
	printf("%d is maximum",b);
	}

	getch();
	clrscr();
}