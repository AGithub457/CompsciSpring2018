/***************************************************************
Problem: Homework 01 Clock
Description: Show the current system time
Name: Armand Agopian
ID: 1612964
Date: 02/06/2018
Status: Complete
****************************************************************/

#include <chrono>
#include <ctime>
#include <string>
#include <iostream>
#include <iomanip>
#include <thread>

using namespace std;
//using namespace std::chrono;

int main() {
	//We should keep requesting current system time in order to be as accurate as possible,
	//because if we request it then add a second ourselves, we might be off by milliseconds
	//and it won't be the exact time. Below is a commented out portion of an implementation
	//to make the time as accurate as possible. It is also, ironically, much shorter than the
	//assignment implementation.

	/*struct tm timeTm;
	char buffer[100];

	while(true) {
	system_clock::time_point timeNow = system_clock::now();
	time_t timeCurrent = system_clock::to_time_t(timeNow);
	localtime_s(&timeTm, &timeCurrent);

	strftime(buffer, 100, "Time now: %T\r", &timeTm);
	printf("%s", buffer);
	}*/

	const int MAX_HOURS = 24;
	const int MAX_MINUTES = 60;
	const int MAX_SECONDS = 60;

	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	chrono::system_clock::time_point timeNow = chrono::system_clock::now();
	time_t timeCurrent = chrono::system_clock::to_time_t(timeNow);
	struct tm timeTm;
	localtime_s(&timeTm, &timeCurrent);

	hours = (&timeTm)->tm_hour;
	minutes = (&timeTm)->tm_min;
	seconds = (&timeTm)->tm_sec;

	while (true) {
		for (; hours < MAX_HOURS; hours++) {
			for (; minutes < MAX_MINUTES; minutes++) {
				for (; seconds < MAX_SECONDS; seconds++) {
					cout << "Time now: "
						<< right << setw(2) << setfill('0') << hours << ":"
						<< right << setw(2) << setfill('0') << minutes << ":"
						<< right << setw(2) << setfill('0') << seconds << '\r';

					this_thread::sleep_for(chrono::seconds(1));
				}

				seconds = 0;
			}

			minutes = 0;
		}

		hours = 0;
	}

	return 0;
}