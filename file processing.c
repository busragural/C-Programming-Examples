#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct hasta{     
	int  randevu_no;     
	char isim[10];       
	char poliklinik[10];  
	char gun[10];	      
}HASTA;

void mailGonder(HASTA h) {
	
	char filename[50];
	
	sprintf(filename, "%s.txt", h.isim);
	
	FILE *fp = fopen(filename, "w");
	
	fprintf(fp, "Merhaba %s,  %s gunu %s polikliniginde %d nolu randevunuz bulunmaktadýr. Lutfen unutmayýnýz.Iyi gunler dileriz.\n", 
	h.isim, h.gun, h.poliklinik, h.randevu_no);
	
	fclose(fp);
}


int main(){
	FILE *fp;
	HASTA h[4]={{1,"ali","dahiliye","salý"},{2,"veli","goz","cuma"},{3,"ayse","cerrahi","pazar"},{4,"fatma","goz","salý"}};
	
	int i;
	int N = 4;
	int polikliniks = 3; 
	int randevular[polikliniks];
	
	

	memset(randevular, 0, sizeof(randevular)); //dizi sýfýrlama
	
//	fp = fopen("input.txt","w+");
//	fwrite(&N,sizeof(int),1,fp);
//	fwrite(h,sizeof(HASTA)*N,1,fp);
//	fclose(fp);

	
	for (i = 0; i < N; i++) {
		
		mailGonder(h[i]);
		
		if (strcmp(h[i].poliklinik, "dahiliye") == 0) {
			randevular[0]++;
		} 
		else if (strcmp(h[i].poliklinik, "goz") == 0) {	
			randevular[1]++;
		} 
		else if (strcmp(h[i].poliklinik, "cerrahi") == 0) {
			randevular[2]++;
		}
	}
	
	

	fp = fopen("rapor.txt", "w");
	fprintf(fp, "Dahiliye  randevu sayisi: %d\n", randevular[0]);
	fprintf(fp, "Göz randevu sayisi: %d\n", randevular[1]);
	fprintf(fp, "Cerrahi randevu sayisi: %d\n", randevular[2]);
	fprintf(fp, "Toplam randevu sayisi: %d", (randevular[0] + randevular[1] + randevular[2]));
	fclose(fp);

}

