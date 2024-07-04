#include<stdio.h>
 main(){
 	int i, fy, sy, count=0;
	int leapyear[50];
 	
 		printf("Enter the first year :- ");
 		scanf("%d",&fy);
 		
 		printf("Enter the second year :- ");
 		scanf("%d",&sy);
 		
 		for(i=fy; i<sy; i++){
 			 if(i%4==0 || i%100==0 || i%400==0 ){
 			 	count++;
 			 leapyear[count]=i;
 			 printf("%d ",leapyear[count]);
			  }
 			 
		 }
	
		
}


