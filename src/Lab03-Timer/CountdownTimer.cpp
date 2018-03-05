#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <thread>

using namespace std;

int main() {
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    char ch;

    string time;
    cout << "Please input time as hh:mm:ss ";
    getline(cin, time);

    stringstream(time) >> hours >> ch >> minutes >> ch >> seconds;

    cout << endl;

    for (int totSeconds = (hours * 3600) + (minutes * 60) + seconds; totSeconds >= 0; totSeconds--) {
        cout << right << setw(2) << setfill('0') << (totSeconds / 3600) << ":"
             << right << setw(2) << setfill('0') << ((totSeconds % 3600) / 60) << ":"
             << right << setw(2) << setfill('0') << totSeconds % 60 << '\r';

        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << endl << "Time's up." << endl;

    return 0;
}