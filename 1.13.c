// Write a program to input data of a student like rollno (int), name (string with space), gender (char), email (string without space), mobile(string without space), course (string with space) and show the output.
#include<stdio.h>
int main(){
	int rollno;
	char gender,name[51],mobile[10],course[51],email[51];
	printf("Enter the rollno: "); scanf("%d",&rollno);
	printf("Enter the name: "); fflush(stdin); gets(name);
	printf("Enter the gender: "); scanf("%c",&gender);
	printf("Enter the email: "); fflush(stdin); gets(email);
	printf("Enter mobile no: "); fflush(stdin); gets(mobile);
	printf("Enter the course: "); fflush(stdin); gets(course);
	printf("%d %s %c %s %s %s",rollno,name,gender,email,mobile,course);
	
}
//Output
//Enter the rollno: 112
//Enter the name: Akash Maurya
//Enter the gender: M
//Enter the email: 17akashma@gmail.com
//Enter mobile no: 9140958740
//Enter the course: B.Tech
//112 Akash Maurya M 17akashma@gmail.com 9140958740 B.Tech
