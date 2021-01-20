// Write a program to input an octal number and print into decimal, octal and hexa decimal
#include<stdio.h>
int main(){
	int num;
	printf("Enter the octal no: ");
	scanf("%o",&num);
	printf("decimal %d\noctal %o\nhexa %x",num,num,num);
}
//Enter the octal no: 756
//decimal 494
//octal 756
//hexa 1ee
