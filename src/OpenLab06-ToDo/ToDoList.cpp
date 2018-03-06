#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void addToList(vector<string> &toDoToday) {
    string addItem;
    cout << "Enter what you want to add: ";
    getline(cin, addItem);

    toDoToday.push_back(addItem);

    cout << "Added." << endl;
}

void showNextItem(vector<string> &toDoToday) {
    cout << "The next item to do is " << toDoToday.at(0) << endl;
}

void listAllItems(vector<string> &toDoToday) {
    cout << "List of things to do today: " << endl;

    for (string item : toDoToday) {
        cout << item << endl;
    }
}

void doNextItem(vector<string> &toDoToday) {
    cout << "The next item you need to do is " << toDoToday.at(0) << ". Item has been removed." << endl;

    toDoToday.erase(toDoToday.begin());
}

void clearList(vector<string> &toDoToday) {
    toDoToday.clear();

    cout << "List cleared." << endl;
}

void saveList(vector<string> &toDoToday) {
    ofstream fout;
    string fName;

    cout << "Enter filename to save to: ";
    getline(cin, fName);

    fout.open(fName);

    for (string item : toDoToday) {
        fout << item << endl;
    }

    cout << "Saved." << endl;
}

void loadList(vector<string> &toDoToday) {
    ifstream fin;
    string fName;
    string item;

    do {
        cout << "Enter a valid filename to load from: ";
        getline(cin, fName);
        cout << endl;

        fin.open(fName);
    } while (!fin);

    while (getline(fin, item)) {
        toDoToday.push_back(item);
    }

    cout << "Loaded." << endl;
}

bool exit() {
    cout << "Goodbye!" << endl;

    return false;
}

int main() {
    vector<string> toDoToday;
    bool notExit = true;
    string selectorS;
    int selector;

    while (notExit) {
        cout << endl
             << "1. Add to list" << endl
             << "2. Show next item" << endl
             << "3. List all items" << endl
             << "4. Do the next item and remove it" << endl
             << "5. Clear List" << endl
             << "6. Save list to file" << endl
             << "7. Load existing list from file" << endl
             << "8. Exit" << endl
             << "Main menu. Please select the number from the following options: ";

        getline(cin, selectorS);
        stringstream(selectorS) >> selector;
        cout << endl;

        switch (selector) {
            case 1:
                addToList(toDoToday);
                break;
            case 2:
                showNextItem(toDoToday);
                break;
            case 3:
                listAllItems(toDoToday);
                break;
            case 4:
                doNextItem(toDoToday);
                break;
            case 5:
                clearList(toDoToday);
                break;
            case 6:
                saveList(toDoToday);
                break;
            case 7:
                loadList(toDoToday);
                break;
            case 8:
                notExit = exit();
                break;
        }
    }

    return 0;
}