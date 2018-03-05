#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> myvector = {10, 20, 30, 40, 50, 60, 70};

    for (int &v : myvector) {
        v *= 100;
        cout << v << " ";
    }

    cout << endl;

    for (int v : myvector) {
        cout << v << " ";
    }

    cout << endl;

    return 0;
}