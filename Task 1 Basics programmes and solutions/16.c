/*16. Write a C program to enter P, T, R and calculate Simple Interest.
output:
Enter principle (amount): 1200
Enter time: 2
Enter rate: 5.4
Simple Interest = 129.600006 */

#include<stdio.h>
main(){
	int a;
	int b;
	float c;
	float i;

	printf("Enter principle (ammount): ");
	scanf("%d",&a);
	printf("Enter time: ");
	scanf("%d",&b);
	printf("Enter rate: ");
	scanf("%f",&c);

	i=a*b*c*0.01;
	printf("Simple Interest = %f",i);

	getch();
	clrscr();
}
