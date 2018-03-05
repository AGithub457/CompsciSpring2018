#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

const double TAX1 = .05;
const double TAX2 = .05;
const int VALUE1 = 15000;
const int VALUE2 = 25000;

int main() {
    int netIncome = 0;
    double taxBill = 0;
    string str;

    cout << "Enter net income (rounded to whole dollars, without dollar sign): ";
    getline(cin, str);
    stringstream(str) >> netIncome;

    taxBill = (netIncome > VALUE1) * (netIncome - VALUE1) * (TAX1) +
              ((netIncome > VALUE2) * (netIncome - VALUE2) * (TAX2));

    cout << fixed << showpoint << setprecision(2);
    cout << "Net Income = $" << netIncome << endl;
    cout << "Tax bill = $" << taxBill << endl;


    return 0;
}