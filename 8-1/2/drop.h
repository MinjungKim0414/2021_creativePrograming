#pragma once
#include<iostream>

using namespace std;

class Planet{
	public:
		Planet(float gravity);
		float drop(float height);

	protected:
		//define
		float grav;
		float sec;
};

class Earth: public Planet{
	public:
		Earth(float gravity) : Planet(gravity){}
		void simulate(float height);
};

class Moon: public Planet {
	public:
		Moon(float gravity) : Planet(gravity){}
		void simulate(float height);
};
