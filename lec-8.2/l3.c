/*Write a Program to find square of each element from the given array.*/



#include<stdio.h>
 main(){
 	int  n, i;
 	printf("Enter the size of Array 'a':- ");
 	scanf("%d",&n);
 	int a[n];
 
 	
 	for(i=0; i<n; i++){
 		printf("enter a[%d]:- ", i);
 		scanf("%d",&a[i]);
	 }
	 	printf("square is :- ");
 	
 	
	  for (i = 0; i < n; i++){
	  
        printf("%d ", a[i] * a[i]);

 		 
						 }
						 
	 
}
	
