#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct ARAC{
	
	char *model;
	int yil;
	int fiyat;
	int adet;
	
}arac;

arac* yeniOlustur(char *model, int yil, int fiyat, int adet);
void ekleYeni(arac*** database, int *aracCount, int *databaseCount, arac* yeniArac);
void siralaZtoA(arac** database, int aracCount);
void siralaAtoZ(arac** database, int aracCount);			
void listele(arac** database, int aracCount);	
void freeArac(arac* arac);
void freeDatabase(arac** database, int aracCount);


int main(){
	
	int exit = 1;
	int choose;
	char model[100];
	int yil;
	int fiyat;
	int adet;
	int cho;
	int i;
	arac *yeniArac;
	arac **database; 
	int databaseCount=4;
	int aracCount=3;
	
	database = (arac**)malloc(databaseCount*sizeof(arac*));
	
	database[0] = yeniOlustur("Tesla", 2022, 2000000, 4);
	database[1] = yeniOlustur("Peugeot", 2017, 401500, 8);
	database[2] = yeniOlustur("Citroen", 2021, 385000, 11);
	
	
	while(exit){
		
		printf("Arac eklemek icin 1, var olan listeyle devam etmek icin 2 giriniz..Cikmak icin 3'basiniz.\nSECIM: ");
		scanf("%d", &choose);
		
		
		switch (choose){
			
			case 1:
				printf("Aracin modelini giriniz: ");
				scanf("%s", model);
				
				printf("Aracin yilini giriniz: ");
				scanf("%d", &yil);
				
				printf("Aracin satis fiyatini giriniz: ");
				scanf("%d", &fiyat);
				
				printf("Aracin adedini giriniz: ");
				scanf("%d", &adet);
				
				yeniArac = yeniOlustur(model, yil, fiyat, adet);
				ekleYeni(&database, &aracCount, &databaseCount, yeniArac);
				printf("databasedeki arac: %d, Database Size: %d\n",aracCount,databaseCount);
				listele(database, aracCount);
				break;
				
				
			case 2:
				
				printf("Artan siralama icin 1, azalan icin 2 giriniz...");
				scanf("%d", &cho);
				
				if(cho == 1){
					printf("ARTAN SIRALAMA\n");
					
					siralaAtoZ(database, aracCount);
					
					listele(database, aracCount);
					
				}
				
				else if(cho == 2){
					printf("AZALAN SIRALAMA\n");
					siralaZtoA(database, aracCount);
					listele(database, aracCount);
				}
				else{
					printf("Wrong choice\n");
				}
				
				break;
				
			case 3:
				exit = 0;
				freeArac(yeniArac);
				freeDatabase(database, aracCount);
				break;
				
			default:
				printf("Wrong choice\n");
		}
		
		
	}
	
	
	
	return 0;
}



arac* yeniOlustur(char *model, int yil, int fiyat, int adet){
	arac *yeniArac = (arac*)malloc(1*sizeof(arac));
	yeniArac->model = (char*)malloc((strlen(model)+1)*sizeof(char));
	strcpy(yeniArac->model, model);
	yeniArac->yil=yil;
	yeniArac->fiyat = fiyat;
	yeniArac->adet = adet;
	return yeniArac;
}


void ekleYeni(arac*** database, int *aracCount, int *databaseCount, arac* yeniArac){
	
	(*database)[(*aracCount)++] = yeniArac;
	
	if(*aracCount ==*databaseCount ){
		*databaseCount *= 2;
		(*database) = (arac**)realloc(*database, (*databaseCount)*sizeof(arac*));
		
	}
}


void siralaZtoA(arac** database, int aracCount){
	int i, j;
	arac tmp;
	
	for(i=0; i<aracCount-1; i++){
      for(j=0; j<aracCount-i-1; j++){
      	if(strcmp(database[j]->model,database[j+1]->model)<0){
        
            tmp = *database[j];
            *database[j] = *database[j+1];
            *database[j+1] = tmp;

         }
      }
   }
}

void siralaAtoZ(arac** database, int aracCount){
	int i, j;
	arac tmp;
	
	for(i=0; i<aracCount-1; i++){
      for(j=0; j<aracCount-i-1; j++){
      	if(strcmp(database[j]->model,database[j+1]->model)>0){
        
            tmp = *database[j];
            *database[j] = *database[j+1];
            *database[j+1] = tmp;

         }
      }
   }
}


void listele(arac** database, int aracCount){
	int i;
	for(i=0; i<aracCount; i++){
		printf("MODEL: %s\nYIL: %d\nSATIS FIYATI: %d\nADEDI: %d\n\n", database[i]->model, database[i]->yil, database[i]->fiyat, database[i]->adet);
	}
}


void freeArac(arac* arac){
	free(arac->model);
	free(arac);
}

void freeDatabase(arac** database, int aracCount){
	int i;
	for(i=0; i<aracCount; i++){
		freeArac(database[i]);
	}
	free(database);
}
