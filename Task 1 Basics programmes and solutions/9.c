   // 9. Writer a C programme to convert days into years, weeks and days.
#include<stdio.h>
main(){
	float a;
	printf("Enter days: ");
	scanf("%f",&a);

	printf("YEARS: %.0f",a/365);
	printf("\nWEEKS: %.0f",a/7);
	printf("\nDAYS: %.0f",a);


	getch();
	clrscr();
}
