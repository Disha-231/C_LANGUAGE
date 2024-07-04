// Write a Program to create Student Record System for 3 
//students using structure. Consider the below-mentioned attributes
// in the Student structure//
#include<stdio.h>
#include<string.h>
struct student {
	int	stu_id;
 	char stu_name[100];
	int	stu_age;
	char stu_course[100];
	char stu_city[100];
	int	stu_standard;
	char stu_school[100];
};
void main(){
	struct student s1;
	struct student s2;
	struct student s3;
	
	printf("Enter id:- ");
	scanf("%d",&s1.stu_id);
	
	printf("Enter age:- ");
	scanf("%d",&s1.stu_age);
	
	printf("Enter standard:- ");
	scanf("%d",&s1.stu_standard);
	
	printf("Enter name:- ");
	scanf("%s",&s1.stu_name);
	
	printf("Enter course:- ");
	scanf("%s",&s1.stu_course);
	
	printf("Enter city:- ");
	scanf("%s",&s1.stu_city);
	
	printf("Enter school:- ");
	scanf("%s",&s1.stu_school);

	printf("Enter id:- ");
	scanf("%d",&s2.stu_id);
	
	printf("Enter age:- ");
	scanf("%d",&s2.stu_age);
	
	printf("Enter standard:- ");
	scanf("%d",&s2.stu_standard);
	
	printf("Enter name:- ");
	scanf("%s",&s2.stu_name);
	
	printf("Enter course:- ");
	scanf("%s",&s2.stu_course);
	
	printf("Enter city:- ");
	scanf("%s",&s2.stu_city);
	
	printf("Enter school:- ");
	scanf("%s",&s2.stu_school);
	
	printf("Enter id:- ");
	scanf("%d",&s3.stu_id);
	
	printf("Enter age:- ");
	scanf("%d",&s3.stu_age);
	
	printf("Enter standard:- ");
	scanf("%d",&s3.stu_standard);
	
	printf("Enter name:- ");
	scanf("%s",&s3.stu_name);
	
	printf("Enter course:- ");
	scanf("%s",&s3.stu_course);
	
	printf("Enter city:- ");
	scanf("%s",&s3.stu_city);
	
	printf("Enter school:- ");
	scanf("%s",&s3.stu_school);
	
	printf("id is %d \n", s1.stu_id);
	printf("name is %s \n", s1.stu_name);
	printf("age is %d \n", s1.stu_age);
	printf("course is %s \n", s1.stu_course);
	printf("city is %s \n", s1.stu_city);
	printf("standard is %d \n", s1.stu_standard);
	printf("school is %s \n", s1.stu_school);
	
	printf("id is %d \n", s2.stu_id);
	printf("name is %s \n", s2.stu_name);
	printf("age is %d \n", s2.stu_age);
	printf("course is %s \n", s2.stu_course);
	printf("city is %s \n", s2.stu_city);
	printf("standard is %d \n", s2.stu_standard);
	printf("school is %s \n", s2.stu_school);
	
	printf("id is %d \n", s3.stu_id);
	printf("name is %s \n", s3.stu_name);
	printf("age is %d \n", s3.stu_age);
	printf("course is %s \n", s3.stu_course);
	printf("city is %s \n", s3.stu_city);
	printf("standard is %d \n", s3.stu_standard);
	printf("school is %s \n", s3.stu_school);
							
								
}
