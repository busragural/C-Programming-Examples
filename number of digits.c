#include<stdio.h>

int main(){
	
	int userNumber;
	int digit = 1;
	
	printf("Enter a number:");
	scanf("%d", &userNumber);
	
	while(userNumber>=10){
		userNumber/=10;
		digit+=1;
	}
	printf("The number you entered is a/an %d-digit-number",digit);
	
	return 0;
}
