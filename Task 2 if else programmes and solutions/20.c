/*20. Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
output:
Enter basic salary of an employee: 22000
GROSS SALARY OF EMPLOYEE = 49500.00 */

#include<stdio.h>
void main(void){
	int b;
	float hra;
	float da;
	float gross;
	printf("Enter basic salary of an employee: ");
	scanf("%d",&b);

	if(b<=10000)
	{
	hra=b*0.2;
	da=b*0.8;
	gross=b+hra+da;
	printf("GROSS SALARY OF EMPLOYEE = %.2f",gross);
	}

	if(b>10000 && b<=20000)
	{
	hra=b*0.25;
	da=b*0.9;
	gross=b+hra+da;
	printf("GROSS SALARY OF EMPLOYEE = %.2f",gross);
	}

	if(b>20000)
	{
	hra=b*0.3;
	da=b*0.95;
	gross=b+hra+da;
	printf("GROSS SALARY OF EMPLOYEE = %.2f",gross);
	}

	getch();
	clrscr();
}