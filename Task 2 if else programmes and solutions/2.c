/*2. Write a C program to find maximum between three numbers.
out:
Enter three numbers: 10
50
120
Maximum among all three numbers = 120 */

#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	int z;
	printf("enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);

	printf("a=%d\nb=%d\nc=%d\n",a,b,c);
	if(a>b)
	{
		if(a>c)
		{
		printf("Maximum among all three numbers = %d",a);
		}
		else if(a<c)
		{
		printf("Maximum among all three numbers = %d",c);
		}

	}
	else if (b>c)
	{
	printf("Maximum among all three numbers = %d",b);
	}
	else
	{
	printf("Maximum among all three numbere = %d",c);
	}
	getch();
	clrscr();
}