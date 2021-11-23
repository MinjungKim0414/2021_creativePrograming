#include <iostream>
#include<vector>
#include "clock_time.h"
#include "clocks.h"

using namespace std;

vector<Clock*> vecC;
int inn;
int n1, n2, n3, n4, n5;

int main() {
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
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

	for (int i = 0; i < inn; i++){
		for (auto it=vecC.begin(); it!=vecC.end(); it++){
			(*it)->tick();
			//(*it)->getal();
			//cout << endl;
			if(vecC[0]->getal() == n1) {
				(*it)->displayAl();
				cout << endl;
				n1 = -999;
			}
			if(vecC[1]->getal() == n2) {
                                (*it)->displayAl();
                                cout << endl;
                                n2 = -999;
                        }
			if(vecC[2]->getal() == n3) {
                                (*it)->displayAl();
                                cout << endl;
                                n3 = -999;
                        }
			if(vecC[3]->getal() == n4) {
                                (*it)->displayAl();
                                cout << endl;
                                n4 = -999;
                        }
			if(vecC[4]->getal() == n5) {
                                (*it)->displayAl();
                                cout << endl;
                                n5 = -999;
                        }
		}
	}
	cout << endl;

	cout << "Reported clock times after running: " << endl;

	for (auto it = vecC.begin(); it != vecC.end(); it++) 
		(*it)->displayTime();

	for (auto it = vecC.begin(); it != vecC.end(); it++) 
		delete *it;

	return 0;
}
