/*
Enter numbers:- 2
Enter a[0]:-5
Enter a[1]:-6
6*/
#include<stdio.h>
void main(){
int i, j, n;
printf("Enter numbers:- ");
scanf("%d",&n);

int a[n];
for(i=0; i<n; i++){
	printf("Enter a[%d]:-", i);
	scanf("%d",&a[i]);
}
int even[n];

int *ptr;
ptr=&a;

for(i=0; i<n; i++){
	if(a[i]%2==0){
	printf("%d",a[i]);
	}else{
	
	}
}

}
