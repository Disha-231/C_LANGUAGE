#include<stdio.h>
 main(){
	 int n, i, sum=0;

	 printf("Enter n:- ");
	 scanf("%d",&n);

	 for(i = 1; i <= n; ++i){
	  sum+= i;
	 }

	 printf("sum = %d", sum);

}
