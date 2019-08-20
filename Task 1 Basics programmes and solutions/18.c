// 18.Write a C programme to find the square of a number.

#include<stdio.h>
void main(void){
	int x;
	int r;
	char c;
	printf("Enter number = ");
	scanf("%d",&x);
	r=x*x;
	printf("square of %d is = %d ",x,r);

	getch();
	clrscr();
}