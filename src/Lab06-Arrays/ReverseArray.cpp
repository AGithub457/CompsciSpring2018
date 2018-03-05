#include <iostream>

using namespace std;


// IMPLEMENT THE REVERSE FUNCTION HERE






void printArray(const int list[], int size) {
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
}


int main() {
    int size = 6;
    int list[] = {1, 2, 3, 4, 5, 6};
    int newList[6];

    reverse(list, newList, size);

    cout << "The original array: ";
    printArray(list, 6);
    cout << endl;

    cout << "The reversed array: ";
    printArray(newList, 6);
    cout << endl;

    return 0;
}
