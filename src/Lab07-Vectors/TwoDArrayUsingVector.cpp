#include <iostream>
#include <vector>

using namespace std;

int sum(const vector<vector<int> > &array) {
    int total = 0;
    for (int row = 0; row < array.size(); row++) {
        for (int column = 0; column < array[row].size(); column++) {
            total += array[row][column];
        }
    }

    return total;
}

int main() {
    vector<vector<int> > array(4); // four rows

    for (int i = 0; i < 4; i++)
        array[i] = vector<int>(3);

    array[0][0] = 1;
    array[0][1] = 2;
    array[0][2] = 3;
    array[1][0] = 4;
    array[1][1] = 5;
    array[1][2] = 6;
    array[2][0] = 7;
    array[2][1] = 8;
    array[2][2] = 9;
    array[3][0] = 10;
    array[3][1] = 11;
    array[3][2] = 12;

    cout << "Sum of all elements is " << sum(array) << endl;

    return 0;
}
