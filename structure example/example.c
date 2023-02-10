#include<stdio.h>
#include<stdlib.h>
#include<string.h>



typedef struct FUTBOL{
	
	char *mevki;
	int kalanYil;
	int maas;

	
}futbolcu;



futbolcu *yeniOlustur(char *mevki, int kalanYil, int maas){
	futbolcu *yeniFutbolcu = (futbolcu*) malloc(1*sizeof(futbolcu));
	yeniFutbolcu->mevki = (char*)malloc((strlen(mevki)+1)*sizeof(char));
	
	strcpy(yeniFutbolcu->mevki, mevki);
	yeniFutbolcu->kalanYil = kalanYil;
	yeniFutbolcu->maas = maas;
	
	return yeniFutbolcu;

}



void ekleYeni(futbolcu*** players, int *futbolcuCount, int *playersCount, futbolcu *yeniFutbolcu){
	
	(*players)[(*futbolcuCount)++] = yeniFutbolcu;
	
	
	if(*playersCount == *futbolcuCount){
		(*playersCount) ++;
		(*players) = (futbolcu**)realloc(*players, (*playersCount)*sizeof(futbolcu*));
	}
}



void sirala(futbolcu **players, int playersCount){
	int i, j;
	futbolcu tmp;
	
	for(i=0; i<playersCount-1; i++){
		for(j=0; j<playersCount-1-i; j++){
			
			if((players[j]->maas)*(players[j]->kalanYil ) < (players[j+1]->maas)*(players[j+1]->kalanYil )){
				tmp = *players[j];
          	  *players[j] = *players[j+1];
          	 *players[j+1] = tmp;
				
			}
		}
	}
}

int find(futbolcu **players, int playersCount){
	
	int i,j, minIndis;

	minIndis = i;
	
	for(i=0; i<playersCount-1; i++){
		
		
		
		for(j=1; j<playersCount-1-i; j++){
			
			if((players[j]->maas) < (players[j+1]->maas)){
				
				minIndis = j;

			}
		}
	}
	
	printf("%d ", minIndis);
	
	return minIndis;
}



void listele(futbolcu** players, int playersCount){
	int i;
	for(i=0; i<playersCount; i++){
		printf("\nMAAS: %d\tKALAN YIL: %d\tMEVKI: %s\n", players[i]->maas, players[i]->kalanYil, players[i]->mevki);
	}
}


int main(){
	
	int n,i;
	char mevki[50];
	int kalanYil;
	int maas;
	int futbolcuCount = 0;
	int playersCount=1;
	int minIndis;
	
	futbolcu **players;
	futbolcu **yeniFutbolcu;
	

	
	
	printf("futbolcu sayisini giriniz:");
	scanf("%d", &n);
		
	players = (futbolcu**)malloc(futbolcuCount*sizeof(futbolcu*));
		
	for(i=0; i<n; i++){
		
		
	
		printf("Maas giriniz: ");
		scanf("%d", &maas);
		
			
		printf("Kalan yili gir:");
		scanf("%d", &kalanYil);
		
		
		printf("Futbolcu mevkisini girin: ");
		scanf("%s", mevki);
	
		yeniFutbolcu  = yeniOlustur(mevki, kalanYil, maas);
		//players[i] = yeniOlustur(mevki, kalanYil, maas);
		ekleYeni(&players, &futbolcuCount, &playersCount, yeniFutbolcu);
		
	}
	
	
	listele(players, n);
	
	printf("\nSIRALANMIS HALI:\n");
	sirala(players, n);
	printf("\n");
	
	listele(players, n);
	
	
	minIndis = find(players, playersCount);
	
	printf("Minimum maas: %d", *players[minIndis]);
	

	return 0;
	
}
