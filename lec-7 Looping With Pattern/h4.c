#include<stdio.h>

main(){
	
	int i, j;
	int k=1;
	char l='a';
	
	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++){
			if(i%2==0){
				printf("%c",l);
				l++;
			}else{
				printf("%d",k);
				k++;
			}		
					
		}
		
		printf("\n");
		
		
	}


}
