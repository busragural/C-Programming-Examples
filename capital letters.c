#include<stdio.h>

int main(){
	
	char text[5000];
	int i;
	
	printf("Enter a text:\n");
	gets(text);
	
	
	if(text[0]>= 'a' && text[0] <= 'z'){
		text[0]+= 'A'- 'a';
		
	}
	
	for(i=0; i<5000; i++){
		
		if(text[i]=='.'){
			
			if(text[i+1]==' '){
				
				if(text[i+2]>= 'a' && text[i+2] <= 'z'){
					
					text[i+2]+= 'A'- 'a' ;
				}
			}
			
			else{
				
				if(text[i+1]>= 'a' && text[i+1] <= 'z'){
					
					text[i+1]+= 'A'- 'a' ;
				}
				
			}
				
		}
		
	}
	
	puts(text);
	
	return 0;
}
