#include<stdio.h>
#include<conio.h>
void main(){
   int bs, da, ta, hra;
   float gs;

clrscr();
	printf("base salary");
	scanf("%d",&bs);

	hra=(10 * bs)/100;
	da=(5 * bs)/100;
	ta=(8 * bs)/100;
	gs=hra + bs + da + ta;

	printf("gross salary:-%f ",gs);



getch();
}
