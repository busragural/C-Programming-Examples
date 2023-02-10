#include<stdio.h>

int isItMissing(int sayi);
void group(int* arr, int n);

int main(){
	
	int n;
	int *arr;
	
	printf("\nEnter array size: ");
	scanf("%d", &n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	group(arr, n);
	
	
	return 0;
}

int isItMissing(int number){

	int i, j, T=0;

	for(i=1; i<=number; i++){
		j = number % i;
		if(j == 0){
			T += i;
		}
	}
	j = 2 * number;
	if(T < j){
		
		return j-T;
	}
	else{
		if(number < 0){
			return -1;
		}
		else{
			return 0;
		}
	}
	
}

void group(int* arr, int n){
	FILE *file;
	int i;
	int value;

	for(i=0; i<n; i++){
		printf("\n%d. element: ", i+1);
		
		scanf("%d", &arr[i]);
		
		value = isItMissing(arr[i]);
		
		if(value == 0){
			
			file = fopen("fullPos.txt", "a");
			fprintf(file, "%d-", arr[i] );
			
		}
		else if(value == -1){
			file = fopen("negative.txt", "a");
			fprintf(file, "%d-", arr[i] );
		}
		else{
			file = fopen("missing.txt", "a");
			fprintf(file, "%d-", arr[i] );
		}
		
	}
	fclose(file);

}

