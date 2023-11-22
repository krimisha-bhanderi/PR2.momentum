#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	clrscr();

	printf("Enter any number:");
	scanf("%d",&number);

		(number%2==0)?printf("The number is even...!")
			     :printf("The number is odd...!");
getch();
}