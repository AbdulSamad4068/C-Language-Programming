/*11. write a C programme to input day number in 
a week and print the name of that day.
out:
Enter week number (1-7): 1
Monday */

#include<stdio.h>
main(){
	int a;
	printf("Enter day number in a week(1-7): ");
	scanf("%d",&a);

	if(a==1)
	printf("Monday");

	else if(a==2)
	printf("Tuesday");

	else if(a==3)
	printf("Wednesday");

	else if(a==4)
	printf("Thursday");

	else if(a==5)
	printf("Friday");

	else if(a==6)
	printf("Saturday");

	else if(a==7)
	printf("Sunday");

	getch();
	clrscr();
}