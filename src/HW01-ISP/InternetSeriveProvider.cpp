#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

const double packageAMonthly = 9.95;
const double packageBMonthly = 14.95;
const double packageCMonthly = 19.95;

const int packageATotal = 10;
const int packageBTotal = 20;

const int packageAAdditional = 2;
const int packageBAdditional = 1;

string strTemp;
char lcIspPackageChar;

string month1Name;
string month2Name;
string month3Name;
string month4Name;
string month5Name;
string month6Name;
string month7Name;
string month8Name;
string month9Name;
string month10Name;
string month11Name;
string month12Name;

int month1Hours;
int month2Hours;
int month3Hours;
int month4Hours;
int month5Hours;
int month6Hours;
int month7Hours;
int month8Hours;
int month9Hours;
int month10Hours;
int month11Hours;
int month12Hours;
int monthTotalHours;

double packageACost = 0;
double packageBCost = 0;
double packageCCost = 0;

int main() {

    cout << "Packages:" << endl
         << "  A: For $9.95 per month 10 hours of access are provided. Additional hours are $2.00 per hour" << endl
         << "  B: For $14.95 per month 20 hours of access are provided. Additional hours are $1.00 per hour" << endl
         << "  C: For $19.95 per month unlimited access is provided." << endl
         << endl
         << "Please select the package letter you have purchased from the options above: ";
    getline(cin, strTemp);

    stringstream(strTemp) >> lcIspPackageChar;
    lcIspPackageChar = tolower(lcIspPackageChar);
    strTemp = "";

    int okPackageContinue = (lcIspPackageChar == 'a' || lcIspPackageChar == 'b' || lcIspPackageChar == 'c') ? 1
                                                                                                            : main();

    /*cout << "Please enter a month and the hours used in the month: ";
    getline(cin, ispPackage);

    stringstream(ispPackage) >> month1Name >> month1Hours;

    switch (tolower(month1Name.at(0))) {
        case 'j':; break;
        case 'm':; break;
        case 'j':; break;

    }*/

    cout << "Please enter January hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month1Hours;
    int okJanContinue = (month1Hours > 744) ? 1 : main();
    monthTotalHours += month1Hours;


    cout << "Please enter February hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month2Hours;
    int okFebContinue = (month2Hours > 672) ? 1 : main();
    monthTotalHours += month2Hours;

    cout << "Please enter March hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month3Hours;
    int okMarContinue = (month3Hours > 744) ? 1 : main();
    monthTotalHours += month3Hours;

    cout << "Please enter April hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month4Hours;
    int okAprContinue = (month4Hours > 720) ? 1 : main();
    monthTotalHours += month4Hours;

    cout << "Please enter May hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month5Hours;
    int okMayContinue = (month5Hours > 744) ? 1 : main();
    monthTotalHours += month5Hours;

    cout << "Please enter June hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month6Hours;
    int okJunContinue = (month6Hours > 720) ? 1 : main();
    monthTotalHours += month6Hours;

    cout << "Please enter July hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month7Hours;
    int okJulyContinue = (month7Hours > 744) ? 1 : main();
    monthTotalHours += month7Hours;

    cout << "Please enter August hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month8Hours;
    int okAugContinue = (month8Hours > 744) ? 1 : main();
    monthTotalHours += month8Hours;

    cout << "Please enter September hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month9Hours;
    int okJSepContinue = (month9Hours > 720) ? 1 : main();
    monthTotalHours += month9Hours;

    cout << "Please enter October hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month10Hours;
    int okOctContinue = (month10Hours > 744) ? 1 : main();
    monthTotalHours += month10Hours;

    cout << "Please enter November hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month11Hours;
    int okNovContinue = (month11Hours > 720) ? 1 : main();
    monthTotalHours += month11Hours;

    cout << "Please enter December hours: ";
    getline(cin, strTemp);
    stringstream(strTemp) >> month12Hours;
    int okDecContinue = (month12Hours > 744) ? 1 : main();
    monthTotalHours += month12Hours;

    switch (lcIspPackageChar) {
        case 'a' :
            packageACost = (packageAMonthly * 12) + ((monthTotalHours - (packageATotal * 12)) * packageAAdditional);
        case 'b' :
            packageBCost = (packageBMonthly * 12) + ((monthTotalHours - (packageBTotal * 12)) * packageAAdditional);
        case 'c' :
            packageCCost = (packageCMonthly * 12);
            break;
        default :
            break;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "Plan A costs: $" << packageACost << endl;
    cout << "Plan B costs: $" << packageBCost << endl;
    cout << "Plan C costs: $" << packageCCost << endl;

    exit(0);
}