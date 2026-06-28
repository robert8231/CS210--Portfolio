#include "ClockFunctions.h"

int main() {
    Time t = { 12, 0, 0 }; // starting time

    while (true) {
        displayClocks(t);
        int choice = displayMenu();

        if (choice == 4) break;
        else if (choice == 1) addHour(t);
        else if (choice == 2) addMinute(t);
        else if (choice == 3) addSecond(t);
    }

    return 0;
}
