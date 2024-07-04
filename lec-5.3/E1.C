#include<stdio.h>
#include<conio.h>
void main(){
int a, b, c, d, e;
clrscr();
     printf("Enter A:-  ");
     scanf("%d",&a);
     printf("Enter B:-  ");
     scanf("%d",&b);
     printf("Enter C:-  ");
     scanf("%d",&c);
     printf("Enter D:-  ");
     scanf("%d",&d);
     printf("Enter E:-  ");
     scanf("%d",&e);
(a>b)?(a>c)?(a>d)?(a>e)?printf("A Max")
		       :printf("E max")
		 :(d>e)?printf("D Max")
		       :printf("E Max")
	   :(c>d)?(c>e)?printf("C Max")
		       :printf("E Max")
		 :(d>e)?printf("D Max")
		       :printf("E Max")
     :(b>c)?(b>d)?(b>e)?printf("B Max")
		       :printf("E Max")
		 :(d>e)?printf("D max")
		       :printf("E Max")
	   :(c>d)?(c>e)?printf("C Max")
		       :printf("E Max")
		 :(d>e)?printf("D Max")
		       :printf("E Max");
getch();
}






























































































































































































































































