// Write a program to input date in ddmmyyyy format and print as dd-mmm-yyyy format
#include<stdio.h>
int main(){
	int d,m,y;
	printf("Enter the date in ddmmyyyy: ");
	scanf("%2d%2d%4d",&d,&m,&y);
	printf("%d-%d-%d",d,m,y);
}
//Output
//Enter the date in ddmmyyyy: 18112021
//18-11-2021
