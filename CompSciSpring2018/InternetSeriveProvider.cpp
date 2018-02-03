#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
	const double planAMonthly = 9.95;
	const double planBMonthly = 14.95;
	const double planCMonthly = 19.95;

	const int planAAdditional = 2;
	const int planBAdditional = 1;

	string package;

	cout << "Packages:" << endl
		 << "  (A): For $9.95 per month 10 hours of access are provided. Additional hours are $2.00 per hour" << endl
		 << "  (B): For $14.95 per month 20 hours of access are provided. Additional hours are $1.00 per hour" << endl
		 << "  (C): For $19.95 per month unlimited access is provided." << endl
		 << endl
		 << "Please select the package you have purchased from the options above: ";
	getline(cin, package);


}