
/*6. Write a C program to check whether a year is leap year or not.
Logic:
Input year from user. Store it in some variable say year.
If a year is exactly divisible by 4 then it is leap year.
out:
Enter year : 2004
LEAP YEAR */

#include<stdio.h>
main(){
	int a;

	printf("Enter year : ");
	scanf("%d",&a);
	if(a%4==0)
	{
	printf("LEAP YEAR");
	}
	else
	printf("not a LEAP YEAR");

	getch();
	clrscr();
}