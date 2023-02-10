#include <stdio.h>
#define N 5000


int main(){
	FILE *fp;
	char text[N];
	int i=-1, a=0, count=1;
	int c, tmp;
	
	if ((fp = fopen ("soru.txt", "r")) == NULL) {
	 	printf("error!");
		return 1;
	}
	 
	fgets(text, N-1, fp);
	 
	while (i<N){
		i++;
	    int j=0;
	    while ((text[i]==' ')&&(text[i+1]==' ')){
	    	i++;
	    	j++; 
		}
			
	    if(j!=0){
	    	for (c=i; i-j<c; c--){
	    		tmp = c;
				while(text[tmp] != '\0'){ 
					text[tmp] = text[tmp+1];
					tmp++;
				}
			}
	    	
	    }   
	}//kelime sayýsý hesaplama
	
	while (text[a+2]!='\0'){        //sonlar boþluk olursa kelime sayýsý fazla çýkmasýn diye
		a++;
	    if (text[a]==' '&& text[a+1]!=' '){       //üsteki boþluk silme algoritmasý hatasýz çalýþmazsa diye 2 kontrollü(hatasýz çalýþýrsa 2.ye gerek yok
	    	count++;
		}
	}
	
	if(text[1]==' '){           //baþlar (2.eleman ve sonrasý)boþluk olursa kelime sayýsý 1 fazla çýkmasýn diye
		count--;
	}
	printf("the number of words in the text : %d\n\n", count);
	printf("output :%s\n", text);
	
	 fclose(fp);
 return 0;
}
