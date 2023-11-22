#include<stdio.h>
#include<conio.h>
void main()
{
	double amount,total_amount,sur_charge,unit;
	clrscr();

	printf("Enter the value of unit:");
	scanf("%lf",&unit);

	if(unit<=50)
	{
		amount=unit * 0.50;
	}
	else if(unit<=150)
	{
		 amount = 25 + ((unit - 50) * 0.75);
	}
	else if (unit<=250)
	{
		 amount = 100 + ((unit - 150) * 1.20);
	}
	else
	{
		amount = 220 + ((unit -250) * 1.50);
	}

	sur_charge = amount *20/100;
	total_amount = sur_charge+amount;
	printf("Electricity bill is:%lf",total_amount);

getch();
}
