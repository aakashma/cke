// Write a program to input a floating number and show that number with two decimal points
#include<stdio.h>
int main(){
	float num;
	printf("Enter the float no: ");
	scanf("%f",&num);
	printf("%.2f",num);
}
// Output
//Enter the float no: 45.455667
//45.46
