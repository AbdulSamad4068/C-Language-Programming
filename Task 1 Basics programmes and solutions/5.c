	/* 5. Write a C programme to enter radius of a circle and find its
	diameter, circumference and area.
	out put:
	Enter radius of circle: 10
	Diameter of circle = 20.00 units
	Circumference of circle = 62.79 units
	Area of circle = 314.00 sq. units */

#include<stdio.h> 
main(){
	float a;
	float c;
	printf("Enter radius of circle: ");
	scanf("%f",&a);

	printf("Diameter of circle = %.2f units\n",2*a);
	printf("Circumference of circle = %.2f units",3.14159*2*a);
	printf("\nArea of circle = %.2f sq. units",3.14*a*a);

	getch();
	clrscr();
}
