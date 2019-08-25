/*7. Write a C program to check whether a character is alphabet or not.
out:
Enter any character: b
Character is an ALPHABET.
out:
Enter any character: +
Character is not an ALPHABET */

#include<stdio.h>
main(){
	char a;
	printf("Enter any character: ");
	scanf("%c",&a);
	if((a>='a' && a<='z')||(a>='A' && a<='Z'))
	{
	printf("Character is an ALPHABET");
	}
	else
	{
	printf("Character is not an ALPHABET");
	}
	getch();
	clrscr();
}