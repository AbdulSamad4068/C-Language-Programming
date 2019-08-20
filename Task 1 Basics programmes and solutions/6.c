      /*6. Write a C programme to enter length in centimeter and convert it into meter and kilometer.
	out put:
	Enter length in centimeter: 1000
	Length in Meter = 10.00 m
	Length in Kilometer = 0.01 km */

#include<stdio.h>
main(){
	float a;
	printf("Enter length in centimeter: ");
	scanf("%f",&a);

	printf("Length in Meter = %.2fm\nLenght in Kilometer = %.2fkm",a*0.01,a*0.00001);

	getch();
	clrscr();
}
