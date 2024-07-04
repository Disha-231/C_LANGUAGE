#include<stdio.h>
 main(){
	int i, n, count=0;
	int a[100];
	 printf("Enter size of array:- ");
	 scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter a[%d]:- ",i);
		scanf("%d",& a[i]);
		count++;
		}
	printf("Length of an Array:- %d",count);
}
