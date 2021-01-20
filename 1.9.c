// Write a program to input a date in dd-mm-yyyy format and print date as dd/mm/yyyy format
#include<stdio.h>
int main(){
	int d,m,y;
	printf("Enter the date in dd-mm-yyyy: ");
	scanf("%2d-%2d-%4d",&d,&m,&y);
	printf("%d/%d/%d",d,m,y);
}
//Output
//Enter the date in dd-mm-yyyy: 16-10-2000
//16/10/2000
