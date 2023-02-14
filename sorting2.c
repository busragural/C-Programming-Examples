#include<stdio.h>
#include<conio.h>

int main(){
	
	int i, j, tmp;
	int arr[50];
	int dimension, minimum;
	
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
		minimum=i;
		for(j=i+1; j<dimension; j++){
			if(arr[j]<arr[minimum]){
				minimum=j;
			}
		}
		tmp=arr[i];
		arr[i]=arr[minimum];
		arr[minimum]=tmp;
	}
	for(i=0; i<dimension; i++){
		printf("%d ",arr[i]);
	}
	
	
	getch();
	return 0;
}
