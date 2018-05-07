#include "labstructs.h"
#include "funcs.hpp"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    //Some Predefines Movies and Timeslots.
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    Movie movie3 = {"Men in Black", COMEDY, 108};
    
    TimeSlot morning = {movie3, {8, 10}};
    TimeSlot daytime = {movie1, {14, 15}};
    TimeSlot evening = {movie2, {20, 30}};
    TimeSlot afternoon_day = {movie2, {13, 15}};


    cout << minutesSinceMidnight( {13, 40} ) << endl;

    cout << minutesUntil( {10, 30}, {13, 40} ) << endl;

    printTime(addMinutes({13, 20}, 30)); cout << "\n";
    printTime(addMinutes({13, 40}, 30)); cout << "\n";
    printTime(addMinutes({13, 40}, 120)); cout << "\n";

    cout << TimeSlotString(morning) + "\n";
    cout << TimeSlotString(evening) + "\n";

    cout << TimeSlotString(scheduleAfter(morning, movie3)) + "\n";
    cout << TimeSlotString(scheduleAfter(daytime, movie2)) + "\n";

    cout << timeOverlap(morning, daytime) << "\n";
    cout << timeOverlap(daytime, afternoon_day) << "\n";
    return 0;
}