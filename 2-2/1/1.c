#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

typedef struct{
	double x;
	double y;
}Point;

typedef struct{
	char name[7];
	Point points[3];
}Person;

int main(void){
	Person p1, p2, p3;
	
	scanf("%s %lf %lf %lf %lf %lf %lf", &(p1.name), &(p1.points[0].x),
			&(p1.points[0].y), &(p1.points[1].x),&(p1.points[1].y)
			, &(p1.points[2].x), &(p1.points[2].y));
	scanf("%s %lf %lf %lf %lf %lf %lf", &(p2.name), &(p2.points[0].x),
                        &(p2.points[0].y), &(p2.points[1].x),&(p2.points[1].y)
                        , &(p2.points[2].x), &(p2.points[2].y));
	scanf("%s %lf %lf %lf %lf %lf %lf", &(p3.name), &(p3.points[0].x),
                        &(p3.points[0].y), &(p3.points[1].x),&(p3.points[1].y)
                        , &(p3.points[2].x), &(p3.points[2].y));

	std::cout<< p1.name<< " ("<< p1.points[0].x<< " "<< p1.points[0].y<<
		") ("<< p1.points[1].x<< " "<< p1.points[1].y<< ") ("<<
		p1.points[2].x<< " "<< p1.points[2].y<< ")" << std::endl;
	std::cout<< p2.name<< " ("<< p2.points[0].x<< " "<< p2.points[0].y<<
                ") ("<< p2.points[1].x<< " "<< p2.points[1].y<< ") ("<<
                p2.points[2].x<< " "<< p2.points[2].y<< ")" << std::endl;
	std::cout<< p3.name<< " ("<< p3.points[0].x<< " "<< p3.points[0].y<<
                ") ("<< p3.points[1].x<< " "<< p3.points[1].y<< ") ("<<
                p3.points[2].x<< " "<< p3.points[2].y<< ")" << std::endl;
	
}
