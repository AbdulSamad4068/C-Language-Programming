/*13. Write a C programme to find the integer is positive or negative
or neither positive nor negative. */

#include<stdio.h>
main(){
	int a;

	printf("Enter any Integer =");
	scanf("%d",&a);

	if(a>0)
	{
	printf("Given number is positive");
	}
	if(a<0)
	{
	printf("Given number is negative");
	}
	if(a==0)
	{
	printf("Given number is neither positive nor negative");
	}

	getch();
	clrscr();
}