#include<stdio.h>
#include<conio.h>



int main(){
	
	int i,j,k;
	int mtr1[20][20], mtr2[20][20],totalMtr[20][20], mMtr[20][20];
	int row1, row2, column1, column2;
	
	printf("Enter the number of row of first matrix:");
	scanf("%d",&row1);
	printf("Enter the number of column of first matrix:");
	scanf("%d",&column1);
	printf("Enter the number of row of second matrix:");
	scanf("%d",&row2);
	printf("Enter the number of column of second matrix:");
	scanf("%d",&column2);
	
	
	for(i=0; i<row1; i++){
		
		for(j=0; j<column1; j++){
			
			printf("Enter the [%d][%d] elements of first matrix:",i+1, j+1);
			scanf("%d",&mtr1[i][j]);
		}
	}
	
	
	for(i=0; i<row2; i++){
		
		for(j=0; j<column2; j++){
			
			printf("Enter the [%d][%d] elements of second matrix:",i+1, j+1);
			scanf("%d",&mtr2[i][j]);
		}
	}
	
	printf("***FIRST MATRIX***\n");
	for(i=0; i<row1; i++){
		
		for(j=0; j<column1; j++){
			
			
			printf("%d ",mtr1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("***SECOND MATRIX***\n");
	for(i=0; i<row2; i++){
		
		for(j=0; j<column2; j++){
			
			
			printf("%d ",mtr2[i][j]);
		}
		printf("\n");
	}
	
	if(row1==row2 && column1==column2){
		
		for(i=0; i<row1; i++){
		
			for(j=0; j<column1; j++){
				
				totalMtr[i][j]=mtr1[i][j]+mtr2[i][j];
			}
		}
		printf("***TOTAL MATRIX***\n");
		for(i=0; i<row2; i++){
		
			for(j=0; j<column2; j++){
	
				printf("%d ",totalMtr[i][j]);
		}
		printf("\n");
		}
	
	}
	else{
		printf("Error. \n");
	}
	
	
	if(column1==row2){
		
		for(i=0; i<row1; i++){
			
			for(j=0; j<column2; j++){
				
				mMtr[i][j]=0;
				
				for(k=0; k<column1; k++){
					
					mMtr[i][j]+=mtr1[i][k]*mtr2[k][j];
				}
			}
		}
		printf("***MULTIPLICATION MATRIX***\n");
		for(i=0; i<row2; i++){
		
			for(j=0; j<column2; j++){
	
				printf("%d ",mMtr[i][j]);
		}
		printf("\n");
		}
			
	}
	else{
		printf("Error.");
	}
	
	
	
	

	
	
	getch();
	return 0;
}
