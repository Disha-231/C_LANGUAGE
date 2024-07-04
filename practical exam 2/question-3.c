/*
Enter the size of array:- 2
Enter a[0]:= 4
Enter a[1]:= 5
5*/
#include<stdio.h>
void main(){
	int n;
	int i;
	
printf("Enter the size of array:- ");
scanf("%d",&n);

int a[n];

for(i=0; i<n; i++){
	printf("Enter a[%d]:= ",i);
	scanf("%d",&a[i]);
}
for(i=0; i<n; i++){
	
	if(a[i]%2!=0){
	printf("%d",a[i]);
	}else{
	
	}
}





}
