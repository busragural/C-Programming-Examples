#include<stdio.h>
#include<math.h>


// Ýki sayýnýn EBOB'unu hesaplama

int main(){
	int largerNumber, smallerNumber, remainder;
	int temp;
	
	printf ("Enter two integer numbers:");
	scanf("%d %d",&largerNumber,&smallerNumber);
	
	if(largerNumber<smallerNumber){
		temp=smallerNumber;
		smallerNumber=largerNumber;
		largerNumber=temp;
	}
	
	remainder=largerNumber % smallerNumber;
	
	while(remainder!=0){
		largerNumber=smallerNumber;
		smallerNumber=remainder;
		remainder=largerNumber % smallerNumber;
		
	}
	
	printf("The greatest common divisor: %d", smallerNumber);
	
	return 0;
}
