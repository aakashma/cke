// Write a program to input name of a person and print first four character only
#include<stdio.h>
int main(){
	char name[51];
	printf("Enter the name: "); fflush(stdin); gets(name);
	printf("%.4s",name);	
}
//Output
//Enter the name: Akash Maurya
//Akas
