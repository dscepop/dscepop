#include<stdio.h>
#include<string.h>

void main()
{  
   int cust_no, unit_con;
   float charge,surcharge=0, amt, total_amt;
   char nm[25];
   
   printf("Enter the customer IDNO :\t");
   scanf("%d",&cust_no);
   printf("Enter the customer Name :\t");
   scanf("%s",nm);
   printf("Enter the unit consumed by customer  :\t");
   scanf("%d",&unit_con);

   if (unit_con <=200 )
      amt = unit_con*0.80;
   else if (unit_con>200 && unit_con<=300)
      {
        amt = 200*0.80;
        amt = amt + (unit_con-200) *0.90;
      }
   else
   {
       amt = 200*0.80;
       amt = amt + 100*0.9;
       amt = amt + (unit_con-300) *1;
   }
   
   if (amt>400)
      surcharge = amt*15/100.0;
   total_amt = amt+surcharge;
   
   printf("\t\t\t\nElectricity Bill\n\n");
   printf("Customer IDNO                       :\t%d",cust_no);
   printf("\nCustomer Name                       :\t%s",nm);
   printf("\nunit Consumed                       :\t%d",unit_con);
   printf("\nAmount Charges:                     :\t%.2f",amt);
   printf("\nSurchage Amount                     :\t%.2f",surcharge);
   printf("\nMinimum meter charge Rs             :\t%d",100);
   printf("\nNet Amount Paid By the Customer     :\t%.2f",total_amt+100);

}