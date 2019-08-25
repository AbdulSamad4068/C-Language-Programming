/*10. Write a C program to check whether a character is uppercase or lowercase alphabet.
out:
Enter any character: C
'C' is uppercase alphabet.
out:
Enter any character: c
'C' is lower uppercase alphabet.
out:
Enter any character: 5
'5' is not alphabet. */

#include<stdio.h>
main(){
	char a;

	printf("Enter any character: ");
	scanf("%c",&a);

	if(a>='a' && a<='z')
	{
	printf("%c is lowercase alphabet.",a);
	}
	else if(a>'A' && a<'Z')
	{
	printf("%c is uppercase alphabet.",a);
	}

	else
	{
	printf("%c is not alphabet.",a);
	}

	getch();
	clrscr();
}