#include<stdio.h>
#include<math.h>

// 3 basamaklý bir sayýnýn armstrong olup olmadýðýný bulma

int main(){
	
	int userNumber, digitSum;
	int hundredsDigit, tensDigit, onesDigit;
	
	
	printf("Enter a 3-digit-number:");
	scanf("%d",&userNumber);
	
	hundredsDigit = userNumber/100;
	tensDigit = (userNumber-(100*hundredsDigit))/10;
	onesDigit = userNumber%10;
	
	
	digitSum = pow(hundredsDigit,3)+pow(tensDigit,3)+pow(onesDigit,3);
	
	if(userNumber == digitSum){
		printf("This is an Armstrong number.");
	}
	else{
		printf("This is not an Armstrong number.");
	}

	return 0;
}
