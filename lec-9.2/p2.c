#include<stdio.h>
#include<string.h>
main(){
	
		char email[100];
		char password[100];
	
	printf("Create Your Email:");
	scanf("%s", & email);
	printf("Create Your Password:");
	scanf("%s", & password);
	


		
	

	
	if(strcmp(email,"dishavaghasiya2311@gmail.com")==0){
			if(strcmp(password,"disha34742")==0){
				printf("login successfull..");
			}	else{
		printf("wrong password....");
	}
		
	}
	else{
		printf("login faild.. invalid credentials...");
	}
}
