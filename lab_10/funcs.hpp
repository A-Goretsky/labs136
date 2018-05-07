#include <iostream>
#include <string>
#include "labstructs.h"

void printTime(Time time);
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
void printMovie (Movie mv);
void printTimeSlot(TimeSlot ts);
std::string convGenretoSring(TimeSlot ts);
std::string TimeSlotString(TimeSlot ts);
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
bool timeOverlap(TimeSlot ts1, TimeSlot ts2);