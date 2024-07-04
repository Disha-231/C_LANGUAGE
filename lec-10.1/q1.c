/* Q.1 Write a Program to find the cube of a given number using UDF.*/
#include<stdio.h>

void cube(int x)
{
	printf("cube of %d is %d",x,x*x*x);
}void main(){
	int a;
	printf("Enter any value:- ");
	scanf("%d", &a);
	cube(a);
	
}
