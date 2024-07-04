/*Write a Program to find the average of a given 2D array.
241
354
826
sum = 35
avg is :- 3.00
*/
#include<stdio.h>
void main(){
	int i, j;
	int sum=0;
	float avg;
	int a[3][3]= {
					{2,4,1},
					{3,5,4},
					{8,2,6},
	
				 };
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
		
	}
		printf("sum = %d\n",sum);
		
		avg=sum/9;
		
		printf("avg is :- %.2f", avg);
		
	
	
}
