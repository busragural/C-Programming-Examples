#include<stdio.h>
#include<conio.h>

int main(){
	int userNumber,result;
	int i;
	int flag=0;
	
	printf("Enter a number.");
	scanf("%d", &userNumber);
	
	if(userNumber<0){
		flag=1;
	}
	else{
		if(userNumber==0){
			flag=1;
		}
		else if(userNumber==1){
			flag=1;
		}
		else{
			for(i=2; i<userNumber-1;i++){
				if(userNumber%i==0){
					flag=1;
				}
			}
		}
	}
	
	if(flag==1){
		printf("It is not a prime number.");
	}
	else{
		printf("It is a prime number.");
	}
	
	
	return 0;
}
