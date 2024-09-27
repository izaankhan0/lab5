/*
Question 3:
Write a C program that uses the ternary operator to determine the letter grade of a student based
on their percentage. The grading scale is as follows: 
? A for percentages 90 and above
? B for percentages 80 to 89
? C for percentages 70 to 79
? D for percentages 60 to 69
? F for percentages below 60
*/

#include<stdio.h>
int main(){
	int percentage;
	printf("Enter the percentage: ");
	scanf("%d", &percentage);
	(percentage >= 90) ? printf("A") : (percentage >= 80 && percentage < 90) ? printf("B"): (percentage >= 70 && percentage < 80) ? printf("C"): (percentage >= 60 && percentage < 70) ? printf("D"): printf("F");
	return 0;
}