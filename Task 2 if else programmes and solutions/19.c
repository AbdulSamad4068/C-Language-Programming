/*19. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Total marks: 500. Each subject contains 100 marks
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F

output:
Enter five subjects marks: 95
95
97
98
90
Percentage = 95.00
Grade A */

#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	int d;
	int e;
	int t;
	float p;
	printf("Enter five subjects marks: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	t=a+b+c+d+e;
	p=(t/500.0)*100;
	printf("Percentage = %.2f\n",p);

	if(p>=90)
	printf("Grade A");

	else if(p>=80 && p<90)
	printf("Grade B");

	else if(p>=70 && p<80)
	printf("Grade C");

	else if(p>=60 && p<70)
	printf("Grade D");

	else if(p>=40 && p<60)
	printf("Grade E");

	else if(p>=40)
	printf("Grade F");

	getch();
	clrscr();
}