// Write a program to input a hexa decimal number and print into decimal, octal and hexa decimal
#include<stdio.h>
int main(){
	int num;
	printf("Enter the hexa decimal no: ");
	scanf("%x",&num);
	printf("decimal: %d\noctal: %o\nhexa: %x",num,num,num);
}
//Enter the hexa decimal no: 8b
//decimal: 139
//octal: 213
//hexa: 8b
