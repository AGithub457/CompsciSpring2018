/***************************************************************
Problem: Lab 02 Roman Numeral <-> Number
Description: Convert between roman numeral and number (vice versa) and output to console and file
Name: Armand Agopian
ID: 1612964
Date: 02/21/2018
Status: Complete
****************************************************************/

#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int numeralToValue(char num) {
	int val = 0;

	switch (num) {
		case 'i': val = 1; break;
		case 'v': val = 5; break;
		case 'x': val = 10; break;
		case 'l': val = 50; break;
		case 'c': val = 100; break;
		case 'd': val = 500; break;
		case 'm': val = 1000; break;
	}

	return val;
}

string numToDec(string num) {
	int dec = 0;
	int prev = 0;

	reverse(num.begin(), num.end());

	for (int i = 0; i < num.length(); i++) {
		int crnt = numeralToValue(tolower(num.at(i)));
		//////
		/*int doSubtract = (crnt < prev) ? -1 : 1;
		dec += (crnt * doSubtract);

		dec += (crnt < prev) ? -crnt : crnt;
*/

		if (crnt < prev) {
			dec -= crnt;
		} else {
			dec += crnt;
		}

		prev = crnt;
	}

	//Old code

	/*for (int i = 0; i < num.length(); i++) {
		switch (tolower(num.at(i))) {
			case 'i': dec++;
				if (i + 1 < num.length()) {
					switch (tolower(num.at(i + 1))) {
						case 'v': dec += 3; i++; break;
						case 'x': dec += 8; i++; break;
					}
				}
				break;
			case 'v': dec += 5; break;
			case 'x': dec += 10;
				if (i + 1 < num.length()) {
					switch (tolower(num.at(i + 1))) {
						case 'l': dec += 30; i++; break;
						case 'c': dec += 80; i++; break;
					}
				}
				break;
			case 'l': dec += 50; break;
			case 'c': dec += 100;
				if (i + 1 < num.length()) {
					switch (tolower(num.at(i + 1))) {
						case 'd': dec += 300; i++; break;
						case 'm': dec += 800; i++; break;
					}
				}
				break;
			case 'd': dec += 500; break;
			case 'm': dec += 1000; break;
		}
	}*/

	return to_string(dec);
}

string decToNum(string dec) {
	string num;
	int number = stoi(dec);

	vector<string> m = { "","M","MM","MMM", "MMMM", "MMMMM", "MMMMMM", "MMMMMMM", "MMMMMMMM", "MMMMMMMMM", "MMMMMMMMMM" };
	vector<string> c = { "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
	vector<string> x = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
	vector<string> i = { "","I","II","III","IV","V","VI","VII","VIII","IX" };

	num = m.at(number / 1000) + c.at((number % 1000) / 100) + x.at((number % 100) / 10) + i.at((number % 10));
	return num;
}

void printline(ostream & st, string val, string res) {
	st << val << " " << res << endl;
}

int main() {
	string val;
	string res;
	bool notExit = true;

	ofstream fout("numeral.txt");

	while (notExit) {
		cout << "Please enter a value (e to exit):";
		getline(cin, val);

		if (tolower(val.at(0)) == 'e') {
			notExit = false;
		} else {
			if ((tolower(val.at(0)) == 'i')
				|| (tolower(val.at(0)) == 'v')
				|| (tolower(val.at(0)) == 'x')
				|| (tolower(val.at(0)) == 'l')
				|| (tolower(val.at(0)) == 'c')
				|| (tolower(val.at(0)) == 'd')
				|| (tolower(val.at(0)) == 'm')) {
				res = numToDec(val);
			} else {
				res = decToNum(val);
			}

			printline(fout, val, res);
			printline(cout, val, res);
		}
	}

	fout.close();

	return 0;
}