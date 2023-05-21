#include <iostream>
using namespace std;

int main() {
	cout << "dota 2 counterpick" << endl <<"21.05.2023"<<endl<< "----------------------------------"<<endl<< "[1]pudge" << endl << "[2]tinker" << endl << "[3]rubick" << endl << "----------------------------------";
	int b,a;
	int c = 2;	
	for (b = 1; b <c;) {
		cout << endl << "choose hero number:" << endl;
		cin >> a;
		if (a == 1) {
			cout<< "pudge counterpick are: rubick/antient apparation/slark" << endl;
			c = 1;
		}
		else if (a == 2) {			
			cout << "counterpick are: clockwerk/legion commander/storm spirit" << endl;
			c = 1;
		}
		else if (a == 3) {			
			cout<< "counterpick are: silencer/antimage/templar assasin"<<endl;
			c = 1;
		}
		else {			
				cout<< "wrong hero number, try again"<<endl<<"----------------------------------";
				c = 2;
		}
	}
	return 0;
}
  