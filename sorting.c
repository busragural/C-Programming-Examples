#include<stdio.h>
#include<conio.h>

// SIRALAMA ALGORÝTMALARI	

int main(){
	
	int i, j, tmp;
	int arr[50];
	int dimension;
	
	printf("Enter the number of elements of the array:");
	scanf("%d", &dimension);

	
	for(i=0; i<dimension; i++){
		printf("Enter the %d. element:", i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<dimension; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	for(i=0; i<dimension-1; i++){
		for(j=0; j<dimension-1-i; j++){
			if(arr[j+1]<arr[j]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	
	for(i=0; i<dimension; i++){
		printf("%d ",arr[i]);
	}
	
	getch();
	return 0;
}
