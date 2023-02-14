#include<stdio.h>
#include<conio.h>

// iki kumenin kesisimi

int main(){
	
	int i,j,k,m,n; 
	int cluster1[50], cluster2[50], intersection[50];
	
	printf("Enter the number of elements of first cluster:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Enter the %d. element:",i+1);
		scanf("%d",&cluster1[i]);
	}
	
	printf("Enter the number of elements of second cluster:");
	scanf("%d",&m);
	
	for(i=0; i<m; i++){
		printf("Enter the %d. element:",i+1);
		scanf("%d",&cluster2[i]);
	}
	
	k=0;
	
	for(i=0; i<=n; i++){
		
		j=0;
		while(j<=m && cluster1[i]!=cluster2[j]){
			j++;
		}
		if(j<=m){
			intersection[k]=cluster1[i];
			k++;
		}
	}
	
	for(i=0; i<=(k-1); i++){
		printf("%d  ", intersection[i]);
	}
	
	
	getch();
	return 0; 
}
