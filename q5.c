/*
Question 5:
Write a C program that checks even or odd by using Bitwise operation.
*/


#include<stdio.h>
int main(){
	int num;
	printf("Enter your Number: ");
	scanf("%d", &num);
	if (num%2 == 0){
		printf("The Number is Even");
	} else{
		printf("The Number is Odd");
	}
	return 0;
}
