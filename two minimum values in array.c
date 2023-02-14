#include<stdio.h>
#include<conio.h>

int main(){
	
	int a[6]={20,30,1,20,40,9};
	int i;
	int m1=1000;
	int m2=1000;
	
	for(i=0; i<6; i++){
		
		if(a[i]<m1){
			m2=m1;
			m1=a[i];
		}
		else{
			
			if(a[i]<m2 && a[i]!=m1){
				
				m2=a[i];
			}
		}
	}
	
	if(m2==1000){
		printf("%d", m1);
	}
	else{
		printf("%d %d", m1, m2);
	}
	
	getch();
	return 0;
}
