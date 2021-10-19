#define _CRT_SECURE_NO_WARNINGS
#include "minesweeper.h"
using namespace std;

int main(void) {
	Minesweeper* game = new Minesweeper();
	while (true) {
		string type;
		stringstream st;
		getline(cin, type);

		// 1)
		if (type.find(":set") != string::npos) {
			int wid, hei;
			st << type.substr(4);
			st >> wid >> hei;

			vector<string> aaa;
			for (int i=0; i < hei; ++i) {
				string line;
				getline(cin, line);
				aaa.push_back(line);
			}
			game->setMap(wid, hei, aaa);
			game->printPlayMap();
		}

		// 2)
		else if (type.find(":toggle") != string::npos) {
			int xx, yy;
			st << type.substr(7);
			st >> xx >> yy;

			if (game->playing())
				continue;
			game->toggleMine(xx, yy);
			game->printPlayMap();
		}
 

		/* 

		// 3)
		else if (type.find(":touch") != string::npos) {
			int xx, yy;
			st << type.substr(6);
			st >> xx >> yy;

			if (!game->playing())
				continue;
			if (!game->touchMap(xx, yy))
				cout << "DEAD(" << game->touchCount() << ")" << endl;
		}

		// 4)

		else if (type.find(":play") != string::npos) {
			if (game->setPlay())
				game->printMap();
		}


		*/
 

		// 5)
		else if (type.find(":quit") != string::npos) {
			break;
		}
		cout << endl;
	}
	delete game;
}

 
