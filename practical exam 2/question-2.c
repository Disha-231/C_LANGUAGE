/*Enter the row size:- 2
Enter the col size:- 2
enter a[0][0]:= 2
enter a[0][1]:= 2

enter a[1][0]:= 2
enter a[1][1]:= 2



sum is 8
avg is 2.000000*/
#include<stdio.h>
 main(){
	int i , j, n ,m;
	int count=0;
	
	printf("Enter the row size:- ");
	scanf("%d",&n);
	
	printf("Enter the col size:- ");
	scanf("%d",&m);
	
	
int a[n][m];


	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("enter a[%d][%d]:= ",i,j);
			scanf("%d",&a[i][j]);
			count++;
		}
		printf("\n");
	}
	
	
	
	int sum=0;
	float avg;
	
for(i=0; i<n; i++){
	for(j=0; j<m; j++){
			sum=sum+a[i][j];
	
	}
	printf("\n");
}

avg=sum/count;


	printf("sum is %d",sum);
		printf("\n");
	printf("avg is %f",avg);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
