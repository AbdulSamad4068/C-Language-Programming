	 /* 7. Write a C programme to enter temperature in Celsius
	  and convert it into Fahrenheit
	out put:
	Enter temperature in Celsius: 100
	100 Celsius = 212.00 Fahrenheit */

#include<stdio.h>
main(){
	float a;
	float z;
	printf("Enter temperature in Celsius: ");
	scanf("%f",&a);

	z=((1.8*a)+32);

	printf("%f",z);
	printf("%.0f Celsius = %.2f Fahrenheit",a,z);


	getch();
	clrscr();
}
