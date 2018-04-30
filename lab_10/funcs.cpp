#include <iostream>
#include <string>
#include "labstructs.h"

using std::cout;
using std::endl;

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

int minutesSinceMidnight(Time time) {
    int ans = 0;
    ans = (time.h * 60) + time.m;
    return ans;
}

int minutesUntil(Time earlier, Time later) {
    int res = 0;
    res = (later.h * 60 + later.m) - (earlier.h * 60 + earlier.m);
    return res;
}

Time addMinutes(Time time0, int min) {
    int hrsAdd = (time0.m + min) / 60;
    int minAdd = (time0.m + min) % 60;
    time0.h = time0.h + hrsAdd;
    time0.m = time0.m + minAdd;
    return time0;
}

void printMovie (Movie mv) {
    std::string g;
    switch (mv.genre) {
        case ACTION: g = "ACTION"; break;
        case COMEDY: g = "COMEDY"; break;
        case DRAMA: g = "DRAMA"; break;
        case ROMANCE: g = "ROMANCE"; break;
        case THRILLER: g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts) {
    printMovie(ts.movie);
    cout << "Time: ";
    printTime(ts.startTime);
}

std::string TimeSlotString(TimeSlot ts) {
    printMovie(ts.movie);
    cout << "[starts at ";
    printTime(ts.startTime);
    printTime(addMinutes(ts.startTime, ts.movie.duration));
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
    
}

int main() {
    
    cout << minutesSinceMidnight( {13, 40} ) << endl;
    cout << minutesUntil( {10, 30}, {13, 40} ) << endl;
}