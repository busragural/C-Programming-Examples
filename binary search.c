#include<stdio.h>
#include<conio.h>

int main(){
	
	int arr[50];
	int i;
	int dimension, wanted, middle;
	int left=0, right=dimension-1, index=-1;
	
	
	printf("Enter the number of elements of the array:");
	scanf("%d", &dimension);

	
	for(i=0; i<dimension; i++){
		printf("Enter the %d. element:", i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<dimension; i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter the number you want to find:");
	scanf("%d", &wanted);
	
	while(right>=left && index==-1){
		middle=left + ((right-left)/2);
		if(wanted==arr[middle]){
			index=middle;
		}
		else{
			if(arr[middle]>wanted){
				right=middle-1;
			}
			else{
				left=middle+1;
			}	
		}
	}
	
	if(index==-1){
		printf("The requested element was not found.");
	}
	else{
		printf("%d", index);
	}
	getch();
	return 0;
}
