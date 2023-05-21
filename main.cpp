#include <iostream>
using namespace std;

int main() {
	cout << "dota 2 counterpick" << endl <<"21.05.2023" << endl << endl << endl << "1.pudge" << endl << "2.tinker" << endl << "3.rubick" << endl << endl<< "choose hero number:" << endl << endl;
	int a;
	cin >> a;
	if (a == 1)
		cout << endl<<"pudge counterpick are: rubick/antient apparation/slark";
	else if (a == 2)
		cout << endl << "counterpick are: clockwerk/legion commander/storm spirit";
	else if (a == 3)
		cout << endl << "counterpick are: silencer/antimage/templar assasin";
	else
		cout << endl << "wrong hero number, stopping program...";
	return 0;
}
