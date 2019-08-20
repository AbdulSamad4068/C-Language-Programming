/* 12. Write a C programme to enter two angles of a triangle and find the third angle.
output:
Enter two angles of triangle: 60 30
Third angle of the triangle = 90 */

#include<stdio.h>
main(){
	float a;
	float b;
	float r;
	float z;

	printf("Enter two angles of triangle: ");
	scanf("%f",&a);
	scanf("%f",&b);

	r=(a+b);
	z=180-r;
	printf("Third angle of the triangle = %.0f",z);

	getch();
	clrscr();
}
