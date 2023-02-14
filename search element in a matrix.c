#include<stdio.h>
#include<conio.h>

// BÝR MATRÝSTE ELEMAN ARAMA

int main(){
	
	int matrix[50][50];
	int i, j;
	int row, column, wanted;
	int flag=0, count=0;
	
	printf("Enter the number of the row of the matris:");
	scanf("%d", &row);
	printf("\nEnter the number of the column of the matris:");
	scanf("%d", &column);
	printf("\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("Enter the [%d][%d]. element:", i+1, j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Enter the number you want to find.");
	scanf("%d",&wanted);
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			if(wanted==matrix[i][j]){
				flag=1; 
				printf("The requested element is in [%d][%d].\n", i+1, j+1);
				count++;
			}
		}
	}
	
	if(flag==0){
		printf("The requested element was not found.");
	}
	else{
		printf("The number of repetition:%d.", count);
	}
	
	
	
	getch();
	return 0;
}
