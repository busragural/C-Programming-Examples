#include<stdio.h>
#include<conio.h>


int main(){
	
	int dataSet[10];
	int i, j;
	int isUnique=0;
	
	
	for(i=0; i<10; i++){
		
		printf("Enter the element:");
		scanf("%d",&dataSet[i]);
		
	}
	
	i=0;
	while(i<10 && isUnique==0){
		
		j=i+1;
		while(j<=10 && isUnique==0){
			
			if(dataSet[i]==dataSet[j]){
				
				isUnique=1;
			}
			j++;
		}
		i++;
	}
	
	if(isUnique==0){
		
		printf("Unique.");
	}
	else{
		
		printf("Not unique.");
	} 
	
	getch();
	return 0;
}
