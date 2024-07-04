/*Write a Program to find the sum of diagonal elements from a given 2D array.
enter row & col size:- 3
Enter a[0][0]:- 1
Enter a[0][1]:- 2
Enter a[0][2]:- 3
Enter a[1][0]:- 4
Enter a[1][1]:- 5
Enter a[1][2]:- 6
Enter a[2][0]:- 7
Enter a[2][1]:- 8
Enter a[2][2]:- 9
1
 5
 9
 The sum of diagonal elements of an Array:- 15
*/
#include<stdio.h>
void main(){
	int i, j,row;
	
	printf("enter row & col size:- ");
	scanf("%d",&row);

		
	int a[row][row];
	for(i=0; i<row; i++){
	for(j=0; j<row; j++){
		printf("Enter a[%d][%d]:- ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
		
	int sum=0;
		
		for(i=0; i<row; i++){
		for(j=0; j<row; j++){
			if(i==j){
			
			printf("%d\n ",a[i][j]);
			sum=sum+a[i][j];
					}
     	}	
		 	
}
printf("The sum of diagonal elements of an Array:- %d",sum);
	
}
