	 /* 8. Write a C programme to enter temperature in Fahrenheit
	  and convert it into Celsius.
	out put:
	Enter temperature in Fahrenheit: 205
	205.00 Fahrenheit = 96.11 Celsius */

#include<stdio.h>
main(){
	float a;
	float y;

	printf("Enter temperature in Fahrenheit: ");
	scanf("%f",&a);

	printf("%.2f Fahrenheit = %.2f Calsius",a,(a-32)*0.55556);


	getch();
	clrscr();
}
