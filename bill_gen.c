#include <stdio.h> ///for input output functions like printf, scanf
#include <conio.h>



void main()
{
	 ;double milk=50.00;
double shirt=399.00;
double watch=1000;
double fridge=15999;
double a,b,c,d;
double h,i,j,k;
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
k=d*fridge;
double tbill=h+i+j+k;
printf("BILL SUMMARY\n\n ");
printf("__________________________________________________________________________________________ \n\n");
printf("SL NO             ITEM NAME                QTY                      PRICE     \n");
printf("__________________________________________________________________________________________ \n\n");
printf("1.                MILK                   %lf                   %lf      \n",a,h);
printf("2.                SHIRT                  %lf                   %lf      \n",b,i);
printf("3.                WATCH                  %lf                   %lf      \n",c,j);
printf("4.                FRIDGE                 %lf                   %lf      \n",d,k);
printf("__________________________________________________________________________________________ \n");
printf("TOTAL BILL AMOUNT = %lf \n",tbill);
printf("__________________________________________________________________________________________ \n");
printf("....HAPPY SHOPPING.... \n");
}
