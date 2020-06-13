#include <stdio.h>
int main()
{
int unit;
float amt, total_amt, sur_charge;
printf("Enter total consumed units: ");
scanf("%d", &unit);
if(unit <= 100)
{
amt = unit * 10;
}
else if(unit <= 200)
{
amt = 50 + ((unit-100)*15);
}
else if(unit <= 300)
{
amt = 100 + ((unit-200)*20);
}
else if(unit > 300)
{
amt = 250 + ((unit-300)*25);
}
sur_charge = amt*0.20;
total_amt = amt+sur_charge;

printf("\nElectricity Bill = Rs. %.2f", total_amt);

return 0;
}
