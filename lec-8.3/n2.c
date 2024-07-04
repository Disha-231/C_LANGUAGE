/*Write a Program to perform the addition operation of two 2D arrays & store it in another array. 
Keep in mind that both array sizes must be the same.
Enter size of array:- 2
Enter a[0][0]:- 1
Enter a[0][1]:- 2

Enter a[1][0]:- 1
Enter a[1][1]:- 2

Enter b[0][0]:- 1
Enter b[0][1]:- 2

Enter b[1][0]:- 1
Enter b[1][1]:- 2

array c is:- 2,4,
2,4,
*/
#include<stdio.h>
 main(){
	int i,j, n, count=0, sum=0;
	int a[100][100];
	int b[100][100];
	int c[100][100];
	
	 printf("Enter size of array:- ");
	 scanf("%d",&n);
	
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
		printf("Enter a[%d][%d]:- ",i,j);
		scanf("%d",& a[i][j]);
		count++;
		}
		printf("\n");}
		
		
		
		for(i=0; i<n; i++){
		for(j=0; j<n; j++){
		printf("Enter b[%d][%d]:- ",i,j);
		scanf("%d",& b[i][j]);
		count++;
		}
		printf("\n");
	}
	
	printf("array c is:- ");
	for(i=0; i<n; i++){
	for(j=0; j<n; j++){
		c[i][j]=a[i][j]+b[i][j];
	
		printf("%d,",c[i][j]);
		}
		printf("\n");
	}

	
}
