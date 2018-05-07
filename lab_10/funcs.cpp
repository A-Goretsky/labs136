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
    time0.m = minAdd;
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

//REWRITE TO OUTPUT STRING
std::string convGenretoSring(TimeSlot ts) {
    std::string g;
    switch (ts.movie.genre) {
        case ACTION: g = "ACTION"; break;
        case COMEDY: g = "COMEDY"; break;
        case DRAMA: g = "DRAMA"; break;
        case ROMANCE: g = "ROMANCE"; break;
        case THRILLER: g = "THRILLER"; break;
    }
    return g;
}


std::string TimeSlotString(TimeSlot ts) {
    std::string res = "";
    res += ts.movie.title + " " + convGenretoSring(ts) + " (";
    res += std::to_string(ts.movie.duration) + ") [starts at ";
    res += std::to_string(ts.startTime.h) + ":" + std::to_string(ts.startTime.m);
    Time endTime = addMinutes(ts.startTime, ts.movie.duration);
    res += ", ends by " + std::to_string(endTime.h) + ":" + std::to_string(endTime.m) + "]"; 
    return res;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
    Time newTime = addMinutes(ts.startTime, ts.movie.duration);
    TimeSlot newSlot = {nextMovie, newTime};
    return newSlot;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2) {
    int mov1_dur = minutesSinceMidnight(addMinutes(ts1.startTime, ts1.movie.duration));
    int mov2_start = minutesSinceMidnight(ts2.startTime);
    return mov2_start < mov1_dur;
}