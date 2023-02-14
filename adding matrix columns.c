#include<stdio.h>
#include<conio.h>



int main(){
	
	int i,j,n,m, toplam;
	int matris[20][20];
	int dizi[20];
	
	printf("Matrisin satir sayisini giriniz.");
	scanf("%d", &n);
	printf("Matrisin sutun sayisini giriniz.");
	scanf("%d", &m);
	
	for(i=0; i<n; i++){
		
		for(j=0; j<m; j++){
			
			printf("Matrisin [%d] [%d]. elemanini giriniz. ", i+1, j+1);
			scanf("%d", &matris[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		
		for(i=0; i<m; i++){
			
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<m; i++){
		
		toplam=0;
		for(j=0; j<n; j++){
			
			toplam+=matris[j][i];
		}
		dizi[i]=toplam;
	}	
	
	for(i=0; i<m; i++){
		printf("%d", dizi[i]);
	}
	
	
	
	
	getch();
	return 0;
}
