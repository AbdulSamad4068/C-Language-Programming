/*18. Write a C program to calculate profit or loss.
output:
Enter cost price: 1000
Enter selling price: 1500
Profit = 500

logic:
Formula to calculate profit and loss
Profit = S.P - C.P (Where S.P is Selling Price and C.P is Cost Price)
Loss = C.P - S.P */

#include<stdio.h>
main(){
	int a;
	int b;
	int r;
	printf("Enter cost price: ");
	scanf("%d",&a);
	printf("Enter selling price: ");
	scanf("%d",&b);

	if(a<b)
       {
	printf("Profit = %d",b-a);
	}
	else if(b<a)
       {
	printf("Loss = %d",a-b);
       }
	getch();
	clrscr();
}