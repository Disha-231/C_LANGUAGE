#include<stdio.h>
#include<conio.h>
void main(){
int a = 2;
int b = 4;

clrscr();
printf("a before swaping =%d\n",a);
printf("b before swaping =%d\n",b);


b=a;
a=a+b;

printf("a after swaping = %d\n",a);
printf("b after swaping = %d\n",b);
getch();
}
