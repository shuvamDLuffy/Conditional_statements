#include <stdio.h>
#include <string.h>
void main()
{
   int custid, consumed;
   float chg, surchg=0, grandamt,netamt;
   char connm[25];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",connm);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&consumed);
   if (consumed <200 )
    chg = 1.20;
   else	if (consumed>=200 && consumed<400)
        chg = 1.50;
    else if (consumed>=400 && consumed<600)
            chg = 1.80;
        else
            chg = 2.00;
   grandamt = consumed*chg;
   if (grandamt>300)
    surchg = grandamt*15/100.0;
   netamt = grandamt+surchg;
   if (netamt  < 100)
    netamt =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",custid);
   printf("Customer Name                       :%s\n",connm);
   printf("unit Consumed                       :%d\n",consumed);
   printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,grandamt);
   printf("Surchage Amount                     :%8.2f\n",surchg);
   printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);

}
