/*4. Write a C program to check whether a number is divisible by 5 and 11 or not.
out:
Enter any number: 55
Number is divisible by 5 and 11 */

#include<stdio.h>
 main(){
	int a;
	printf("Enter any number: ");
	scanf("%d",&a);

	if(a%55==0)
	{
	printf("Number in divisible by 5 and 11");
	}
	else
	{
	printf("Number is not divisible by 5 and 11");
	}
	getch();
	clrscr();
}