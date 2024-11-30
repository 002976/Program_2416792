#include <stdio.h>
#include <stdlib.h>

struct point{		//create structure
	int x;
	int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2); //prototype

int main(int argc, char *argv[]) {
	double area;
	
	struct point p1, p2;
	struct point *pPtr1, *pPtr2;
	
	pPtr1 = &p1;		//set pointer
	pPtr2 = &p2;
	
	printf("Input coordinate of p1 (x, y) : ");		//retrieve data of points
	scanf("%d%d", &p1.x,&p1.y);
	printf("Input coordinate of p2 (x, y) : ");
	scanf("%d%d", &p2.x, &p2.y);
	
	area = getArea(pPtr1, pPtr2);
	printf("Area : %f", area);
	return 0;
}

int getArea(struct point *pPtr1, struct point *pPtr2){
	double width, length, area;
	
	width = pPtr1->x - pPtr2->x ;		//with the given data, calculate width and length for area
	length = pPtr1->y - pPtr2->y ;
	
	area = width*length;
	if(area<0)
	area = -area;
	
	return area;			//reture value for main function
}
