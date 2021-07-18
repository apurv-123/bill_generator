#include <stdio.h> ///for input output functions like printf, scanf
#include <conio.h>



void main()
{
	 double milk=50.00;
double shirt=399.00;
double watch=1000;
double fridge=15999;
double a,b,c,d;
double h,i,j,k;
printf("____________________________________________ \n\n");
printf("Enter the quantity of milk purchased \n");
scanf("%lf",&a);
h=a*milk;
printf("Enter the quantity of shirt purchased \n");
scanf("%lf",&b);
i=b*shirt;
printf("Enter the quantity of watch purchased \n");
scanf("%lf",&c);
j=c*watch;
printf("Enter the quantity of fridge purchased \n");
scanf("%lf",&d);
printf("\t\t__________________________________________________________________________________________ \n\n");
k=d*fridge;
double tbill=h+i+j+k;
printf("\t\t\t\t\t\t\tBILL SUMMARY\n\n ");
printf("\t\t__________________________________________________________________________________________ \n\n");
printf("\t\tSL NO             ITEM NAME                QTY                      PRICE     \n");
printf("\t\t__________________________________________________________________________________________ \n\n");
printf("\t\t1.                MILK                   %lf                   %lf      \n",a,h);
printf("\t\t2.                SHIRT                  %lf                   %lf      \n",b,i);
printf("\t\t3.                WATCH                  %lf                   %lf      \n",c,j);
printf("\t\t4.                FRIDGE                 %lf                   %lf      \n",d,k);
printf("\t\t__________________________________________________________________________________________ \n");
printf("\t\t\t\t\t\t\t\t\tTOTAL BILL AMOUNT = %lf \n",tbill);
printf("\t\t__________________________________________________________________________________________ \n");
printf("\t\t\t\t\t\t....HAPPY SHOPPING.... \n");
}
