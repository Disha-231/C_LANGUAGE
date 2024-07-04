#include<stdio.h>
/*
Input:
Enter any string: hello world

Output:
Uppercase string: HELLO WORLD
*/
void main(){
	int i;
	char a[]={'h','e','l','l','o','w','o','r','l','d'};
	
	
	for(i=0;i<=9;i++){
		a[i]=a[i]-32;
		printf("%c ",a[i]);
	}
	
}
