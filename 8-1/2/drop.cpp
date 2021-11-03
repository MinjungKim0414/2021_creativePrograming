#pragma once 
#include<iostream>
#include"drop.h"
#include<cmath> 

using namespace std;

Planet::Planet(float gravity){
	grav = gravity;
}

float Planet::drop(float height){
	sec = sqrt(2*height/grav);;
}


void Earth::simulate(float height){
	drop(height);
	cout << "Earth gravity = " << grav << endl << "Drop from " 
		<< height << "m, " << sec <<  " seconds." << endl;
}

void Moon::simulate(float height){
	drop(height);
        cout << "Moon gravity = " << grav << endl << "Drop from "
                << height << "m, " << sec <<  " seconds." << endl;
}


