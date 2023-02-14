#include<stdio.h>
#include<conio.h>
#include<math.h>

//Decimal to binary

int main(){
	
	int userNumber;
	int counter=0, total=0;
	
	printf("Enter a decimal number:");
	scanf("%d", &userNumber);
	
	if(userNumber>=2){
		total+=(userNumber%2)*(pow(10,userNumber));
		userNumber/=2;
		counter+=1;
		
	}
	total+=(userNumber*(pow(10,userNumber)));
	printf("%d",total);
	
	
	
	getch();
	return 0;
}
