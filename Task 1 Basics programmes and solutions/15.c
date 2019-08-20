/* 15. Write a C program to enter marks of five subjects and calculate total, average and percentage.
output:
Enter marks of five subjects: 
95
76
85
90
89
Total marks = 435.00
Average marks = 87.00
Percentage = 87.00 */

#include<stdio.h>
 main(){
	int a;
	int b;
	int c;
	int d;
	int e;
	float z;

	printf("Enter marks of five subjects:\n");

	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d\n",&c);
	scanf("%d\n",&d);
	scanf("%d",&e);

	z=a+b+c+d+e;
	printf("Total marks = %.2f\n",z);
	printf("Average marks = %.2f\n",z*0.2);
	printf("Percentage = %.2f",z*0.2);
	getch();
	clrscr();
}