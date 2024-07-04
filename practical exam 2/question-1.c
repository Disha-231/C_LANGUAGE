/*Enter the mark of maths:- 100
Enter the mark of Gujarati:- 100
Enter the mark of Hindi:- 100
Enter the mark of English:- 100
Enter the mark of Science:- 100
Total is 500
avg is 100
pr is 100.000000
A+*/






#include<stdio.h>
 main(){
	int s1,s2,s3,s4,s5;
	
	printf("Enter the mark of maths:- ");
	scanf("%d",&s1);
	printf("Enter the mark of Gujarati:- ");
	scanf("%d",&s2);
	printf("Enter the mark of Hindi:- ");
	scanf("%d",&s3);
	printf("Enter the mark of English:- ");
	scanf("%d",&s4);
	printf("Enter the mark of Science:- ");
	scanf("%d",&s5);
	
	int avg;
	float pr;
	int total;
	total=s1+s2+s3+s4+s5;
	avg=(s1+s2+s3+s4+s5)/5;
	pr=total*100/500;
	
	printf("Total is %d \n",total);
	printf("avg is %d \n",avg);
	printf("pr is %f \n",pr);
	
	char grade;
	
	if(pr>90){
		printf("A+");
	}else if (pr>=80 && pr<=90){
			printf("A");
	}else if (pr>=70 && pr<=80){
			printf("B+");
	}else if (pr>=60 && pr<=70){
			printf("B");
	}else if (pr>=50 && pr<=60){
			printf("C");
	}else{
	 printf("fail");
			
}
	

	
	
	
	
}
