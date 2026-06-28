#include <iostream>
#include <iomanip>
using namespace std;

#include "ClockFunctions.h"

void displayClocks(const Time& t) {
    // Convert to 12-hour format
    int hour12 = t.hour;
    string ampm = "AM";

    if (hour12 == 0) {
        hour12 = 12;
    }
    else if (hour12 == 12) {
        ampm = "PM";
    }
    else if (hour12 > 12) {
        hour12 -= 12;
        ampm = "PM";
    }

    // Display clocks
    cout << "**************************     **************************" << endl;
    cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
    cout << "*     ";

    cout << setw(2) << setfill('0') << hour12 << ":"
        << setw(2) << setfill('0') << t.minute << ":"
        << setw(2) << setfill('0') << t.second << " " << ampm;

    cout << "       *     *     ";

    cout << setw(2) << setfill('0') << t.hour << ":"
        << setw(2) << setfill('0') << t.minute << ":"
        << setw(2) << setfill('0') << t.second;

    cout << "       *" << endl;
    cout << "**************************     **************************" << endl;
}

void addHour(Time& t) {
    t.hour++;
    if (t.hour >= 24) {
        t.hour = 0;
    }
}

void addMinute(Time& t) {
    t.minute++;
    if (t.minute >= 60) {
        t.minute = 0;
        addHour(t);
    }
}

void addSecond(Time& t) {
    t.second++;
    if (t.second >= 60) {
        t.second = 0;
        addMinute(t);
    }
}

int displayMenu() {
    int choice;

    cout << "\n**************************" << endl;
    cout << "* 1 - Add One Hour       *" << endl;
    cout << "* 2 - Add One Minute     *" << endl;
    cout << "* 3 - Add One Second     *" << endl;
    cout << "* 4 - Exit Program       *" << endl;
    cout << "**************************" << endl;
    cout << "Enter your choice: ";

    cin >> choice;
    return choice;
}