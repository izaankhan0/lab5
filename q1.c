/*
Question 1:
Create a program that checks if a person is eligible to vote based on their age and citizenship status.
*/

#include<stdio.h>
int main(){
	int age, cit;
	printf("Enter your age:");
	scanf("%d", &age);
	
	printf("Enter 1 of you have citizenship and 0 if not:");
	scanf("%d", &cit);
	
	if (age >= 18){
		if (cit == 1){
			printf("Eligible to Vote!");
		} else{
			printf("Not Eligible to Vote!");
		}
	} else{
		printf("Not Eligible to Vote!");
	}
	return 0;
}