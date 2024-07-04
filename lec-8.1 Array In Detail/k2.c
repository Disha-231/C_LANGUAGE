#include<stdio.h>
 main(){
	int i, n, count=0, sum=0, avg;
	int a[100];
	 printf("Enter size of array:- ");
	 scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter a[%d]:- ",i);
		scanf("%d",& a[i]);
		count++;
		}
	for(i=0; i<n; i++){
		sum=sum+a[i];
		}
	avg=sum/n;
	printf("avg of array:- %d", avg);
	
}
