#ifndef CLOCKFUNCTIONS_H
#define CLOCKFUNCTIONS_H

struct Time {
    int hour;
    int minute;
    int second;
};

void displayClocks(const Time& t);
void addHour(Time& t);
void addMinute(Time& t);
void addSecond(Time& t);
int displayMenu();

#endif
