//Write a program input a decimal number and print into decimal, octal and hexa decimal
#include<stdio.h>
int main(){
	int num;
	printf("Enter the decimal no: ");
	scanf("%d",&num);
	printf("decimal: %d\n octal: %o\n hexa: %x",num,num,num);
}
/*
Enter the decimal no: 123
decimal: 123
 octal: 173
 hexa: 7b
*/
