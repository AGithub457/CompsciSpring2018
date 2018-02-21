#include <string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double payment;
	double apr = 0, mpr = 0, amtLoan = 0;
	int numPayments = 0;
	string mystr;

	cout << "Please enter the APR, number of payments, and the amount of the loan: ";
	getline(cin, mystr);
	stringstream(mystr) >> apr, numPayments, amtLoan;

	cout << apr, numPayments, amtLoan;

	mpr = apr / (12 * 100);

	payment = ((mpr)* pow((1 + mpr), numPayments)) / (pow((1 + mpr), numPayments) - 1) * (amtLoan);

	cout << "Loan Amount:             $ " << right << setw(10) << amtLoan << endl;
	cout << "Monthly Interest Rate:     " << endl;
	cout << "Number of Payments:        " << endl;
	cout << "Monthly Payment:         $ " << endl;
	cout << "Amount Paid Back:        $ " << endl;
	cout << "Interest Paid:           $ " << endl;

	return 0;
}