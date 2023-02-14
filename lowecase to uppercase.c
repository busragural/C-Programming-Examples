#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	int i;
	char word[50];
	int len;
	
	
	printf("Enter your word:");
	gets(word);
	
	len=strlen(word);
	
	/*	 instead of 'len' function
	i=0;
	while(word[i]!='\0'){
		i++;
	}
	len=i;
	*/
	
	
	for(i=0; i<len; i++){
		if(word[i] >= 'a' && word[i] <= 'z'){
				word[i]+='A' - 'a';
		}
		
	}
	
	printf("%s", word);
	
	
	getch();
	return 0;
}
