#include<stdio.h>
#include<conio.h>

int main(){
	
	char word[50];
	int length;
	int i,j;
	
	printf("Enter a word:");
	gets(word);
	
	i=0;
	while(word[i]!='\0'){
		i++;
	}
	length=i;
	
	i=0;
	j=length-1;
	
	while(i<j && word[i]==word[j]){
		i++;
		j--;
	}
	
	if(i>=j){
		printf("%s is a palindrome word.", word);
	}
	else{
		printf("%s is not a palindrome word.", word);
	}
	
	
	
	getch();
	return 0; 
}
