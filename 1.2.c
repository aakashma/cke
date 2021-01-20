// Write a program to input a floating number and show without decimal point
#include<stdio.h>
int main(){
	float num;
	printf("Enter the float no: ");
	scanf("%f",&num);
	printf("%0.0f",num);
}
// Output
// Enter the float no: 34.5677
// 35
