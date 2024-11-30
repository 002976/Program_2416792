#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

int getArea(struct point p1, struct point p2);

int main(int argc, char *argv[]) {
	double area;
	
	struct point p1, p2;
	
	printf("Input coordinate of p1 (x, y) : ");
	scanf("%d%d", &p1.x,&p1.y);
	printf("Input coordinate of p2 (x, y) : ");
	scanf("%d%d", &p2.x, &p2.y);
	
	area = getArea(p1,p2);
	
	printf("Area : %f", area);
	return 0;
}

int getArea(struct point p1, struct point p2){
	double width, length, area;

	width = p1.x - p2.x ;
	length = p1.y - p2.y ;
	
	area = width*length;
	if(area<0)
	area = -area;
	
	return area;
}
