//  Write a program to input date in any given format like dd mm yyyy, dd-mm-yyyy, dd/mm/yyyy format and show that date in dd-mmm-yyyy format
#include<stdio.h>
int main(){
	int d,m,y;
	printf("Enter the date in dd mm yyyy: ");
	scanf("%2d %2d %4d",&d,&m,&y);
	printf("%d-%d-%d",d,m,y);
}
//Output
//Enter the date in dd mm yyyy: 19 12 2022
//19-12-2022
