	/* 1. write a C programme to enter two numbers and find thier sum 
	out put:
	Enter any two numbers : 12 20
	Sum of 12 and 20 = 32 */

#include<stdio.h>
main(){
	int a,b,r;

	printf("Enter any two numbers : ");
	scanf("%d%d",&a,&b);

	printf("\nSum of %d and %d = %d",a,b,a+b);

	getch();
	clrscr();
}
