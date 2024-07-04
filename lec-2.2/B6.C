#include<stdio.h>
 main(){

  int s1, s2, s3, s4, s5, s6, s7, s8;
  float avg, pr;

    printf("maths:- ");
    scanf("%d",&s1);

    printf("science :- ");
    scanf("%d",&s2);

    printf("gujarati :- ");
    scanf("%d",&s3);

    printf("social science :- ");
    scanf("%d",&s4);

    printf("hindi :- ");
    scanf("%d", &s5);

    printf("sankrit :- ");
    scanf("%d", &s6);

    printf("english :- ");
    scanf("%d", &s7);

    printf("drawing :- ");
    scanf("%d", &s8);

	avg=s1+s2+s3+s4+s5+s6+s7+s8/8;
	pr=(avg*100)/800;

    printf("avg of all subject = %.2f\n",avg);
    printf("pr:-%.2f",pr);

}
