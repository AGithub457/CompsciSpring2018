#include <iostream>
#include <sstream>
#include <string>

using namespace std;

double sumS(int i) {
    double sum = ((i) / ((2 * i) + 1.0));
    if (i != 11) {
        sum += sumS(i + 1);
    }

    return sum;
}

int main() {
    cout << sumS(1);

    return 0;
}