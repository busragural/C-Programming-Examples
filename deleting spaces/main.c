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
	}//kelime say�s� hesaplama
	
	while (text[a+2]!='\0'){        //sonlar bo�luk olursa kelime say�s� fazla ��kmas�n diye
		a++;
	    if (text[a]==' '&& text[a+1]!=' '){       //�steki bo�luk silme algoritmas� hatas�z �al��mazsa diye 2 kontroll�(hatas�z �al���rsa 2.ye gerek yok
	    	count++;
		}
	}
	
	if(text[1]==' '){           //ba�lar (2.eleman ve sonras�)bo�luk olursa kelime say�s� 1 fazla ��kmas�n diye
		count--;
	}
	printf("the number of words in the text : %d\n\n", count);
	printf("output :%s\n", text);
	
	 fclose(fp);
 return 0;
}
