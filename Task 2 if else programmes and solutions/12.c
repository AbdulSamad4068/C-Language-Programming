/*12. Write a C program to input month number and print number of days in that month.
logic:
January, March, May, July, August, October, December	31 days
February	28/29 days
April, June, September, November 30 days
out:
Enter month number (1-12): 12
31 days */

#include<stdio.h>
main(){
	int a;
	printf("Enter month number(1-12): ");
	scanf("%d",&a);

	if((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12))
	{
	printf("31 days");
	}

	else if((a==4)||(a==6)||(a==9)||(a==11))
	{
	printf("30 days");
	}
	else if(a==2)
	printf("28/29 days");

	getch();
	clrscr();
}