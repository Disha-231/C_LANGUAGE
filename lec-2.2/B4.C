#include<stdio.h>
#include<conio.h>
void main(){

  int p, r, t;
  float area;
 clrscr();

    printf("enter the value of principle ammount:- ");
    scanf("%d",&p);

    printf("enter the value of Rate per annum:- ");
    scanf("%d",&r);

    printf("enter the value of time:- ");
    scanf("%d",&t);

	area=(p*r*t)/100;

    printf("area of t = % f",area);
 getch();
}