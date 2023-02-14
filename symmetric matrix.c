#include<stdio.h>
#include<conio.h>

// verilen kare bir matrisin simetrik olup olmadýðýný bulma

int main(){
	
	int i, j, n; 
	int m[20][20];
	int flag=1;
	
	printf("Matris boyutunu giriniz:");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
			
			printf("Matrisin [%d][%d]. elemanini giriniz:", i+1, j+1);
			scanf("%d",&m[i][j]);
		}
	}
	
	i=0;
	
	while(i<n && flag==1){
		
		j=i+1;
		
		while(j<n && flag==1){
			
			if(m[i][j]!=m[j][i]){
				flag=0;
			}
			j++;
		}
		i++;
		
	}
	
	if(flag==1){
		printf("Simetrik.");
		
	}
	else{
		printf("Simetrik degil.");
	}
	
	getch();
	return 0;
}
