#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    bool notExit = true;
    string calculationInput;
    int valueLeft = 0;
    int valueRight = 0;
    char calculation;
    double result;

    fstream file;
    file.open("calc.txt", fstream::out);

    while (notExit) {
        cout << "What calculation?: ";
        getline(cin, calculationInput);
        cout << endl;

        //Messy, to fix later (check for first whichever shows up, then switch)
        if (calculationInput.find_first_of("+-/*^") != std::string::npos) {
            stringstream(calculationInput) >> valueLeft >> calculation >> valueRight;
            switch (calculation) {
                case '+':
                    result = valueLeft + valueRight;
                    break;
                case '-':
                    result = valueLeft - valueRight;
                    break;
                case '/':
                    result = valueLeft / valueRight;
                    break;
                case '*':
                    result = valueLeft * valueRight;
                    break;
                case '^':
                    result = pow(valueLeft, valueRight);
                    break;
            }

            file << calculationInput << " = " << result << endl;
            cout << fixed << showpoint << setprecision(3);
            cout << calculationInput << " = " << result << endl;
        } else if (calculationInput.find("sqrt") != std::string::npos) {

        } else if (calculationInput.find("exit") != std::string::npos) {
            cout << "Goodbye.";
            notExit = false;
        } else {
            cout << "Invalid input, goodbye.";
            notExit = false;
        }
    }
    file.close();
    return 0;
}