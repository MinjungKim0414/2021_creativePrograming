#include <iostream>
#include<vector>
#include "clock_time.h"
#include "clocks.h"

using namespace std;

vector<Clock*> vecC;
int inn;

int main() {
	cin >> inn;

	vecC.push_back(new SundialClock(0, 0, 0));
	vecC.push_back(new CuckooClock(0, 0, 0));
	vecC.push_back(new GrandFatherClock(0, 0, 0));
	vecC.push_back(new WristClock(0, 0, 0));
	vecC.push_back(new AtomicClock(0, 0, 0));

	for(auto it=vecC.begin(); it!=vecC.end(); it++)
		(*it)->reset();

	cout << "Reported clock times after resetting:" << endl;
	for (auto it=vecC.begin(); it!=vecC.end(); it++)
		(*it)->displayTime();
	cout << endl;

	cout << "Running the clocks..." << endl << endl;
	for (int i = 0; i < inn; i++)
		for (auto it=vecC.begin(); it!=vecC.end(); it++)
			(*it)->tick();
	cout << "Reported clock times after running:" << endl;

	for (auto it = vecC.begin(); it != vecC.end(); it++) 
		(*it)->displayTime();

	for (auto it = vecC.begin(); it != vecC.end(); it++) 
		delete *it;

	return 0;
}
