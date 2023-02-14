#include<stdio.h>
#include<conio.h>
#define N 10


// dizide araya eleman sýkýþtýrma

int main(){
	
	int i, x=55, pos=6;
	
	int a[N]={10, -20, 40, -10, 90, 50, 30, 45, 60};
	
	for(i=N; i>pos; i--){
		a[i]=a[i-1];
		
	}
	
	a[pos]=x;
	
	for(i=0; i<N+1; i++){
		printf("%d ",a[i]);
	}
	
	
	getch();
	return 0;
}
