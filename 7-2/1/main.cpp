#include<iostream>
#include<string>
#include<sstream>
#include"message.h"

using namespace std;

string line;
string buf;

int main() {
	MessageBook mess;
	while(true){
		getline(cin, line);
		
		if(line.find("add") != string::npos) {
			stringstream ss(line);
			ss >> buf; ss >> buf;
			getline(ss, line);
			mess.AddMessage(atoi(buf.c_str()), line.substr(1));
		}
		
		if(line.find("delete") != string::npos) {
			stringstream str(line);
			str >> buf; str >> buf;
			mess.DeleteMessage(atoi(buf.c_str()));
			cout << endl;
		}

		if(line.find("print") != string::npos) {
			stringstream st(line);
			st >> buf; st >> buf;
			cout<< mess.GetMessage(atoi(buf.c_str())) <<endl<<endl;
	}

		if(line.find("list") != string::npos) {
			vector<int> vecint = mess.GetNumbers();
			for(int i=0; i < vecint.size(); i++)
				cout << vecint[i] << " : " 
					<< mess.GetMessage(vecint[i]) << endl;
			cout << endl;
		}

		if(line.find("quit") != string::npos){ break; }
	}
}
