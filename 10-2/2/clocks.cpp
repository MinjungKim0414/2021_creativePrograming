#include <iostream>
#include "clocks.h"

using namespace std;

Clock::Clock(int hour, int minute, int second, double driftPerSecond){
	_clockTime.setTime(hour, minute, second, 1.0 + driftPerSecond);
	_driftPerSecond = driftPerSecond;
	_totalDrift = 0.0;
}

int Clock::getal(){
	return _clockTime.hour() *60*60 
		+ _clockTime.minute()*60
		+ _clockTime.second();
} 

void Clock::reset(){
	_clockTime.reset();
}

void Clock::tick() {
	_clockTime.increment();
	_totalDrift += _driftPerSecond;
}

void SundialClock::displayTime() {
	cout << "SundialClock ";
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
}
void CuckooClock::displayTime() {
	cout << "CuckooClock ";
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
}
void GrandFatherClock::displayTime() {
	cout << "GrandFatherClock ";
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
}
void WristClock::displayTime() {
	cout << "WristClock ";
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
}
void AtomicClock::displayTime() {
	cout << "AtomicClock ";
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
}

void SundialClock::displayAl() {
        cout << "Sundial alarm at ";
        _clockTime.display();
}
void CuckooClock::displayAl() {
        cout << "Cuckoo alarm at ";
        _clockTime.display();
}
void GrandFatherClock::displayAl() {
        cout << "GrandFather alarm at ";
        _clockTime.display();
}
void WristClock::displayAl() {
        cout << "Wrist alarm at ";
        _clockTime.display();
}
void AtomicClock::displayAl() {
        cout << "Atomic alarm at ";
        _clockTime.display();
}

