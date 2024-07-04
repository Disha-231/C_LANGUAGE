#include<stdio.h>
 main(){
	int i,j,m ,n, count=0, sum=0;
	float avg;
	int a[100][100];

	
	 printf("Enter size of array:- ");
	 scanf("%d",&n);
	  printf("Enter size of array:- ");
	 scanf("%d",&m);
	 
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
		
		printf("Enter a[%d][%d]:- ",i,j);
		scanf("%d",& a[i][j]);
		count++;
		}}
		
	
		
		
		
		
		
		
	for(i=0; i<n; i++){
		for(j=0;j<n; j++){
			
		
		sum=sum+a[i][j];
		
		}
		}
	avg=sum/count;
	printf("avg of array:- %f", avg);
	
}
