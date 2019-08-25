/*3. Write a C program to check whether a number is negative, positive or zero.
output:
Enter any number: 10
Number is POSITIVE
output:
Enter any number: -1
Number is NEGATIVE
output:
Enter any number: 0
Number is neither POSITIVE nor NEGATIVE */

#include<stdio.h>
main(){
	int a;
	printf("Enter any number: ");
	scanf("%d",&a);

	if(a>0)
	{
	printf("Number is POSITIVE");
	}

	else if(a<0)

	{
	printf("Number is NEGATIVE");
	}
	else if(a==0)
	{
	printf("Number is neither POSITIVE nor NEGATIVE");
	}

	getch();
	clrscr();
}