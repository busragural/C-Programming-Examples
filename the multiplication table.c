#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,j,k;
	int carpim;
	
	for(i=0; i<11; i++){

		printf("%d*\t", i);
		
		for(j=1; j<11; j++){
		
			if(i==0){
			
				printf("%d*\t", j);	
					
			}
			else{
				carpim=i*j;
				printf("%d\t", carpim);	
			}
			
		
		}
		printf("\n\n");	
	
	}
	
	
	
	
	getch();
	return 0;
}
