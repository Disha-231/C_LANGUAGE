#include<stdio.h>
 main(){
	int i,j, n,m, count=0, sum=0;
	int a[100][100];
	int b[100][100];
	 printf("Enter size of array:- ");
	 scanf("%d",&n);
	  printf("Enter size of array:- ");
	 scanf("%d",&m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		
		printf("Enter a[%d][%d]:- ",i,j);
		scanf("%d",& a[i][j]);
		count++;
	}
		}
	for(i=0; i<n; i++){
			for(j=0; j<m; j++){
		sum=sum+a[i][j];
		}
	}
	printf("sum of array:- %d", sum);
	
}

