/*
pattern
    10
   910
  8910
 78910
678910

*/










#include<stdio.h>
void main(){
	int i, j, s;
	
	for(i=10; i>=6; i--){
		for (s=i; s>6; s--){
			printf(" ");
		
		}
		for(j=i; j<=10; j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
