#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	
	int i;
	int countArmstrong=0;
	int hundredsDigit, tensDigit, onesDigit,digitSum;
	
	for(i=100; i<1000; i++){
		hundredsDigit = i/100;
		tensDigit = (i-(100*hundredsDigit))/10;
		onesDigit = i%10;
		
		digitSum = pow(hundredsDigit,3)+pow(tensDigit,3)+pow(onesDigit,3);
		
		if(i == digitSum){
			printf("%d\n",i);
			countArmstrong+=1;
		}
	}
	printf("%d",countArmstrong);
	
	getch();
	return 0;
}
