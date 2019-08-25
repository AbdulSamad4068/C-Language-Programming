/*8. Write a C program to input any alphabet and check whether it is vowel or consonant.
out:
Enter any character: a
'a' is Vowel.
out:
Enter any character: U
'U' is Vowel.
out:
Enter any character: n
'n' is Consonant.
out:
Enter any character: N
'N' is Consonant.
out:
Enter any character: +
'+' is not Alphabetical. */

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