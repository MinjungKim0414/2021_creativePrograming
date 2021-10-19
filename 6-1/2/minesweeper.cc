#include "minesweeper.h"

Minesweeper::Minesweeper() {
	map = nullptr;
	mWidth = 0;
	mHeight = 0;
	mTouchCount = 0;
	onPlay = false;
}
 
Minesweeper::~Minesweeper() {
	delete[] map;
}
 
bool Minesweeper::setMap(size_t _width, size_t _height, vector<string>& mMap) {
	if (_width <= 0 || _height <= 0) return false;
 
	mWidth = _width;
	mHeight = _height;
	onPlay = false;
	mTouchCount = 0;

	map = new int* [mHeight];
	for (int i = 0; i < mHeight; ++i)
		map[i] = new int[mWidth]();

	for (int i = 0; i < mHeight; ++i) {
		const char* line = mMap[i].c_str();
		for (int j = 0; j < mWidth; ++j)
			if (line[j] == '*') { map[i][j] = 0; }
			else if (line[j] == '.') { map[i][j] = 1; }
	}
}

bool Minesweeper::toggleMine(int _x, int _y) {
	if (map == nullptr || !range(_x, _y) || visited(_x, _y)) return false;
	map[_y][_x] = !map[_y][_x];
	return true;
}

size_t Minesweeper::width() const {
	return this->mWidth;
}

size_t Minesweeper::height() const {
	return this->mHeight;
}

char Minesweeper::get(int _x, int _y) const {
	return range(_x, _y) ? map[_y][_x] : ' ';
}
 

/*
bool Minesweeper::setPlay() {
	if (map == nullptr) return false;
	if (onPlay) {
		mTouchCount = 0;
		for (int i = 0; i < mHeight; ++i)
			for (int j = 0; j < mWidth; ++j)
				map[i][j] = !visited(j, i) ? map[i][j] : -map[i][j];
	}
	else onPlay = true;
	return true;
}

bool Minesweeper::touchMap(int _x, int _y) {
	if (!range(_x, _y)) return true;
	++mTouchCount;

	if (map[_y][_x] == 0)
		return false;

	if (!visited(_x, _y))
		map[_y][_x] = -map[_y][_x];
	else
		--mTouchCount;

	printMap();
	return true;
}

int Minesweeper::touchCount() const {
	return mTouchCount;
}

void Minesweeper::printMap() const {
	for (int i = 0; i < mHeight; ++i) {
		for (int j = 0; j < mWidth; ++j)
			if (visited(j, i))
				cout << getNearSum(j, i);
			else
				cout << "_";
		cout << endl;
	}
}
 
*/

void Minesweeper::printPlayMap() const {
	for (int i = 0; i < mHeight; ++i) {
		for (int j = 0; j < mWidth; ++j)
			if (!map[i][j])
				cout << "*";
			else
				cout << getNearSum(j, i);
		cout << endl;
	}
}

inline bool Minesweeper::range(int _x, int _y) const {
	return _x >= 0 && _x < mWidth && _y >= 0 && _y < mHeight;
}

inline bool Minesweeper::visited(int _x, int _y) const {
	return map[_y][_x] < 0;
}

bool Minesweeper::playing() const {
	return onPlay;
}

int Minesweeper::getNearSum(int x, int y) const {
	int sum = 0;
	for (int k = 0; k < 8; ++k)
		if (range(x + xx[k], y + yy[k]))
			sum += !map[y + yy[k]][x + xx[k]];
	return sum;
}

