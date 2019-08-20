	/* 10. Write a C programme to find power of any number x^y.
	output:
	enter base: 5
	enter exponen: 3
	5^3 = 125*/

#include<stdio.h>
#include<math.h>
 main(){
	int a,b,r;


	printf("Enter base: ");
	scanf("%d",&a);
	printf("\nEnter Exponenet: ");
	scanf("%d",&b);

	printf("base = %d\nexpo = %d",a,b);

	r=pow(a,b);
	printf("\n%d^%d = %d",a,b,r);

	getch();
	clrscr();
 }