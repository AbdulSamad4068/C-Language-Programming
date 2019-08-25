/*21. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill

out:
Enter total units consumed: 150
Electricity Bill = Rs. 120.00 */

#include<stdio.h>
main(){
	float a;
	float r;
	float s;
	float t;
	float u;
	printf("Enter total units consumed: ");
	scanf("%f",&a);

	if(a<=50)
       {
	r=a*0.50;
	printf("Electricity Bill = Rs. %.2f",r+r*0.2);
       }


	else if(a>50 && a<=150)
       {
	s=((a-50)*0.75)+25;
	printf("Electricity Bill = Rs. %.2f",s+s*0.2);
       }


	else if(a>150 && a<=250)
       {
	t=((a-150)*1.20)+100;
	printf("Electricity Bill = Rs. %.2f",t+t*0.2);
       }


	else if(a>250)
       {
	u=((a-250)*1.50)+220;
	printf("Electricity Bill = Rs. %.2f",u+u*0.2);
       }

	getch();
	clrscr();
}