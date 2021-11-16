#include<iostream>
#include"canvas.h"
#include<vector>
#include<string>



vector<Shape*> v;
vector<vector<int>> val2;
vector<int>	 val1;
vector<char> bbrush;
vector<string> name;
string s;
int a, b, c, d;
char e;

int main() {
	cin >> a >> b;
	Canvas cv(a, b);
	cv.Clear();
	cv.Print();
	while (true) {
		cin >> s;
		if (s.compare("add") == 0) {
			cin >> s;
			if (s.compare("rect") == 0) {
				cin >> a >> b >> c >> d >> e;
				v.push_back(new Rectangle(a, b, c, d, e));
				bbrush.push_back(e);
				val1.push_back(a);
				val1.push_back(b);
				val1.push_back(c);
				val1.push_back(d);
				val2.push_back(val1);
				val1.clear();
				name.push_back(s);
			}

			else if (s.compare("diamond") == 0) {
				cin >> a >> b >> c >> e;
				v.push_back(new Diamond(a, b, c, e));
				bbrush.push_back(e);
				val1.push_back(a);
				val1.push_back(b);
				val1.push_back(c);
				val2.push_back(val1);
				val1.clear();
				name.push_back(s);
			}
			else if (s.compare("tri_up") == 0) {
				cin >> a >> b >> c >> e;
				v.push_back(new UpTriangle(a, b, c, e));
				bbrush.push_back(e);
				val1.push_back(a);
				val1.push_back(b);
				val1.push_back(c);
				val2.push_back(val1);
				val1.clear();
				name.push_back(s);
			}
			else if (s.compare("tri_down") == 0) {
				cin >> a >> b >> c >> e;
				v.push_back(new DownTriangle(a, b, c, e));
				bbrush.push_back(e);
				val1.push_back(a);
				val1.push_back(b);
				val1.push_back(c);
				val2.push_back(val1);
				val1.clear();
				name.push_back(s);
			}
			else continue;
		}
		else if (s.compare("delete") == 0) {
			cin >> a;
			if (a > v.size() - 1) continue;
			else {
				delete v[a];
				v.erase(v.begin() + a);
				bbrush.erase(bbrush.begin() + a );
				val2.erase(val2.begin() + a );
				name.erase(name.begin() + a);
			}
			
		}
		else if (s.compare("resize") == 0) {
			cin >> a >> b;
			cv.Resize(a, b);
		}
		else if (s.compare("dump") == 0) {
			for (int i = 0; i < val2.size(); i++) {
				cout << i << " " << name[i] << " ";
				for (int j = 0; j < val2[i].size(); j++) 
					cout << val2[i][j] << " ";
				
				cout <<bbrush[i]<< endl;
			}
		}
                if (s.compare("draw") == 0) {
                        cv.Clear();
                        for (auto it = v.begin(); it != v.end(); it++) {
                                (*it)->Draw(&cv);
                        }
                        cv.Print();
                }
		if (s.compare("quit") == 0) break;
		else continue;
	}
		return 0;
}
