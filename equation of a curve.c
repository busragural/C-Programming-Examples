#include<stdio.h>

// ba�lang�� ve biti� koordinatlar� verilen do�rusal e�rinin denklemi
int main(){
	
	int x1,x2,y1,y2; // Our equation form is y=ax+b.
	int a, b;
	
	printf("Enter the starting coordinates.");
	scanf("%d %d",&x1, &y1 );
	
	printf("Enter the ending coordinates.");
	scanf("%d %d",&x2, &y2 );
	
	if(x1==x2){
		printf("x=%d",x1);
	}
	else{
		a = (y1-y2)/(x1-x2);
		b = y1-(a*x1);
		
		if(a==1){
			printf("y=x+(%d)",b);
		}
		else {
			printf("y=%dx+(%d)",a,b);
		}
		
	}
	
	return 0;
}
