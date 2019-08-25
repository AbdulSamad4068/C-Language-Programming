/*5. Write a C program to check whether a number is even or odd.
out:
Enter any number to check it is even or odd: 11
Number is Odd */

#include<stdio.h>
main(){
	int a;

	printf("Enter any number to check it is even or odd: ");
	scanf("%d",&a);

	if(a%2==0)
	{
	printf("Number is Even");
	}
	else
	{
	printf("Number is Odd");
	}

	getch();
	clrscr();
}