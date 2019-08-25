/* 17. Write a C program to find all roots of a quadratic equation.
Enter values of a, b, c of quadratic equation (aX^2 + bX + c): 8 -4 -2
Two real roots exists: 0.81 and -0.31 */

#include<stdio.h>
#include<math.h>
main(){
	int a;
	int b;
	int c;
	int desk;
	float d;
	float r1;
	float r2;
	printf("Enter a,b and c in (aX^2 + bX + c): \n");
	scanf("%d %d %d",&a,&b,&c);

	desk=(b*b)-(4*a*c);

	d=pow(desk,0.5);

	if(desk>=0)
       {
	r1=((-b)+d)/(a*2);

	r2=((-b)-d)/(a*2);

	printf("\nTwo distinct and real roots exists: %.2f and %.2f",r1,r2);
       }
       else
	printf("\nthe given quadratic equation has imaginary roots.");
	getch();
	clrscr();
}