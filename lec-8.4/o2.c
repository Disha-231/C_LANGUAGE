#include<stdio.h>
 main(){
	int i,m, n,j, count=0, sum=0;
	int a[100][100];
	int b[100][100];
	int c[100][100];
	
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
		 	printf("\n");
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
		printf("Enter b[%d][%d]:- ",i,j);
		scanf("%d",& b[i][j]);
		count++;
		}
}
	printf("\n");

			printf("sum:- ");
	for(i=0; i<n; i++){
			for(j=0; j<m; j++){
		c[i][j]=a[i][j]+b[i][j];
	
		printf("%d  ",c[i][j]);
		}
	}
		printf("\n");
		printf("subtract:- ");
	for(i=0; i<n; i++){
			for(j=0; j<m; j++){
		c[i][j]=a[i][j]-b[i][j];
	
		printf("%d  ",c[i][j]);
		}
	}
			printf("\n");
		printf("multiply:- ");
	for(i=0; i<n; i++){
			for(j=0; j<m; j++){
		c[i][j]=a[i][j]*b[i][j];
	
		printf("%d  ",c[i][j]);
		}
	
}
	
}
