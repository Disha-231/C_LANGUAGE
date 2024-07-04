#include<stdio.h>
 main(){
	 int i=1;
	 int n;

	 printf("Enter n= ");
	 scanf("%d",&n);

	 while(n>=10){
	      n=n/10;
	      i++;
	 };
		 printf("%d",i);

}
