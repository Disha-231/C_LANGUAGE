#include<stdio.h>
 main(){
int units;
float amount;

   printf("enter units...:-  ");
   scanf("%d",&units);

   if(units<50) amount=units*0.50;
   else if(units<150) amount=50*0.50+0.75;
}
