#ifndef minesweeper_h
#define minesweeper_h

#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

class Minesweeper {
public:
	////////// //////////
	Minesweeper();
	~Minesweeper();

	// return false when input is incorrect
	bool setMap(size_t _width, size_t _height, vector<string>& _map);
	bool toggleMine(int _x, int _y);

	// return map width, height, and char
	size_t width() const;
	size_t height() const;
	char get(int _x, int _y) const; // return ' ' if input is illegal

	////////// //////////

	bool setPlay(); // return false when map is not set
	bool touchMap(int _x, int _y); // return true when dead

	int touchCount() const;

	void printMap() const;

	void printPlayMap() const;
	inline bool range(int _x, int _y) const;
	inline bool visited(int _x, int _y) const;
	bool playing() const;

private:
	// add private member variables and functions if it is needed.
	int** map;

	unsigned int mTouchCount;
	size_t mWidth;
	size_t mHeight;
	bool onPlay;
	vector<string> mMap;
	vector<string> playMap;
 
	const int xx[8] = { 1,0,-1,0,1,1,-1,-1 };
	const int yy[8] = { 0,1,0,-1,-1,1,1,-1 };

	//void printPlayMap() const;

	int getNearSum(int x, int y) const;
};
#endif // !__HDR__MINE_SWEEPER__
