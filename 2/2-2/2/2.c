#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>

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
	
	Point temp1, temp2, temp3;
	temp1 = p1.points[0];
	if (pow(temp1.x,2) + pow(temp1.y,2)
			< pow(p1.points[1].x,2)+ pow(p1.points[1].y,2))
	{ temp1 = p1.points[1]; }
	if (pow(temp1.x,2) + pow(temp1.y,2)
                        < pow(p1.points[2].x,2)+ pow(p1.points[2].y,2))
        { temp1 = p1.points[2]; }

	temp2 = p2.points[0];
        if (pow(temp2.x,2) + pow(temp2.y,2)
                        < pow(p2.points[1].x,2)+ pow(p2.points[1].y,2))
        { temp2 = p2.points[1]; }
        if (pow(temp2.x,2) + pow(temp2.y,2)
                        < pow(p2.points[2].x,2)+ pow(p2.points[2].y,2))
        { temp2 = p2.points[2]; }

	temp3 = p3.points[0];
        if (pow(temp3.x,2) + pow(temp3.y,2)
                        < pow(p3.points[1].x,2)+ pow(p3.points[1].y,2))
        { temp3 = p1.points[1]; }
        if (pow(temp3.x,2) + pow(temp3.y,2)
                        < pow(p3.points[2].x,2)+ pow(p3.points[2].y,2))
        { temp3 = p3.points[2]; }


	std::cout << p1.name << " (" << temp1.x << ", "<< temp1.y <<
		 ")" << std::endl;
	std::cout << p2.name << " (" << temp2.x << ", "<< temp2.y <<
                 ")" << std::endl;
	std::cout << p3.name << " (" << temp3.x << ", "<< temp3.y <<
                 ")" << std::endl;
}
