/*
Question 4:
Write a C program that uses the ternary operator to determine if a customer is eligible for a discount
based on their total purchase amount and membership status. The discount is applied if the purchase
amount is above $100 and the customer has a membership
*/


#include<stdio.h>
int main(){
	int total, status;
	printf("Enter the Total: ");
	scanf("%d", &total);
	
	printf("Enter 1 of you have a Membership and 0 if you don't: ");
	scanf("%d", &status);
	
	(total > 100 && status == 1) ? printf("Apply Discount!"): printf("Don't Apply Discount!");
	
	return 0;
}

