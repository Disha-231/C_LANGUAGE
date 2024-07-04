 /*out put:-
 
 Enter any Number:-  2
 Enter Company Name :- oppo
Enter Processor:- 10
Enter price:- 50000

 Enter Company Name :- vivo
Enter Processor:- 60
Enter price:- 20000

The Company is => vivo
The Processor is => 60
The Price is => 20000

The Company is => vivo
The Processor is => 60
The Price is => 20000
*/
#include<stdio.h>
#include<string.h>
struct laptop {
	
	char processor[100];
 	char company[100];
	int	price;

	
};
void main(){
	struct laptop s1;
	struct laptop s2;
	struct laptop s3;

int i;
int n;
 printf("Enter any Number:-  ");
 scanf("%d",&n);
	
for(i=0; i<n; i++){
	printf(" Enter Company Name :- ");
	scanf("%s",&s1.company);
	
	printf("Enter Processor:- ");
	scanf("%d",&s1.processor);
	
	printf("Enter price:- ");
	scanf("%d",&s1.price);

	
	printf("\n");
	
}
	
	

	
for(i=0; i<n; i++){
	
	printf("The Company is => %s \n", s1.company);
	printf("The Processor is => %d \n", s1.processor);
	printf("The Price is => %d \n", s1.price);
	
	printf("\n");
}
	
							
}
