#include<stdio.h>
#include<stdlib.h>
#include<math.h>


typedef struct Point{
	int x;
	int y;
	
}Point;


typedef struct Circle{
	int r;
	Point center; 
	
}Circle;


void isItInside(Circle* center, Point *x, Point *y, Circle *radius){
	
	int k = x - center->center.x;
	int l = y - center->center.y;
	int a = pow(k, 2);
	int b = pow(l, 2);
	
	center->r = radius;
	int c = pow(center->r, 2);
	
	if((a+b)<=c){
		printf("\n(%d, %d) is inside the circle", x,y);
	}
	else{
		printf("\n(%d, %d) is not inside the circle.", x,y);
	}
	
}


int main(){
	
	int n,i;
	Circle *center = (Circle*)malloc(sizeof(Circle));
	Point *point = (Point*)malloc(n*sizeof(point));
	
	
	printf("\nEnter the x value of the center point of the circle:");
	scanf("%d", &center->center.x);
	
	printf("\nEnter the y value of the center point of the circle:");
	scanf("%d", &center->center.y);
	
	printf("\nEnter the radius of the circle:");
	scanf("%d", &center->r);
	
	printf("\nHow many points will be searched?");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("\n%d. point (x): ", i+1);
		scanf("%d", &point->x);
		
		printf("\n%d. point (y): ", i+1);
		scanf("%d", &point->y);
		
		isItInside(center, point->x, point->y, center->r);
		
	}
	

	return 0;
}
