//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	int year;
}Book;

int main(){
	Book b1[4];
	
	for(int i=0; i<4; i++){
		scanf("%s %d", &(b1[i].name), &(b1[i].year));
	}
	for(int j=0; j<4; j++){
		std::cout << "Name: " << b1[j].name << 
			", Published Year: " << b1[j].year << std::endl;
	}
}

