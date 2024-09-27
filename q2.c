/*
Question 2:
Check if a triangle is valid based on its three angles, where the sum must be exactly 180 degrees and all
angles must be positive.
*/

#include<stdio.h>
int main(){
	
	int a1, a2, a3;
	printf("Enter the First Angle: ");
	scanf("%d", &a1);
	printf("Enter the Second Angle: ");
	scanf("%d", &a2);
	printf("Enter the Third Angle: ");
	scanf("%d", &a3);
	if (a1 >=0  && a3 >=0 && a2 >=0 ){
		if (a1 + a2 + a3 == 180){
			printf("Triangle is Valid");
		} else{
		
			printf("Triangle is inValid");
		}
	} else{
		printf("Angle is invalid as it is negative");
	}
	
	return 0;
}