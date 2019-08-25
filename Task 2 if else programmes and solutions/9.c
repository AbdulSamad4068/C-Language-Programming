/*9. Write a C program to input any character and check whether it is alphabet, digit or special character.
out:
Enter any character: a
'a' is Alphabetical.
out:
Enter any character: U
'U' is Alphabetical.
out:
Enter any character: 5
'5' is digital number.
out:
Enter any character: $
'$' is special character.
out:
Enter any character: +
'+' is special character. */

#include<stdio.h>
main(){
	char a;
	printf("Enter any character: ");
	scanf("%c",&a);
	if((a>='a' && a<='z')||(a>='A' && a<='Z'))
	{
		printf("%c is Alphabetical.",a);
	}

	else if(a>='0' && a<='9')
	{
		printf("%c is digital number.",a);
	}
	else
	{
	printf("%c is special character.",a);
	}

	getch();
	clrscr();
}