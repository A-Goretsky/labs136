#include <iostream>
#include <string>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.hpp"
#include "labstructs.h"
#include "../doctest/doctest/doctest.h"

bool operator==(const Time& lhs, const Time& rhs) {
    return ( (lhs.h == rhs.h) && (lhs.m == rhs.m) );
}

bool operator==(const Movie& lhs, const Movie& rhs) {
    return ( lhs.title == rhs.title && lhs.genre == rhs.genre && lhs.duration == rhs.duration);
}
bool operator==(const TimeSlot& lhs, const TimeSlot& rhs) {
    return ( lhs.movie == rhs.movie && lhs.startTime == rhs.startTime);
}

Movie movie1 = {"Back to the Future", COMEDY, 116};
Movie movie2 = {"Black Panther", ACTION, 134};
Movie movie3 = {"Men in Black", COMEDY, 108};

TimeSlot morning = {movie3, {8, 10}};
TimeSlot daytime = {movie1, {14, 15}};
TimeSlot evening = {movie2, {20, 30}};
TimeSlot afternoon_day = {movie2, {13, 15}};

TEST_CASE("Basic Structs") {
    SUBCASE("minutesUntilMidnight") {
        CHECK_EQ(minutesSinceMidnight({13, 40}), 820);
        CHECK_EQ(minutesSinceMidnight({9, 30}), 570);
        CHECK_EQ(minutesSinceMidnight({0, 0}), 0);
    }
    SUBCASE("minutesUntil") {
        CHECK_EQ(minutesUntil({10, 30}, {13, 40}), 190);
        CHECK_EQ(minutesUntil({12, 00}, {17, 00}), 300);
        CHECK_EQ(minutesUntil({13, 40}, {10, 30}), -190);
        CHECK_EQ(minutesUntil({3, 50}, {13, 10}), 560);
    }
    SUBCASE("addMinutes") {
        CHECK_EQ(addMinutes( {13, 20}, 30), Time{13, 50} );
        CHECK_EQ(addMinutes( {13, 40}, 30), Time{14, 10} );
        CHECK_EQ(addMinutes( {13, 40}, 120), Time{15, 40} );
    }
    SUBCASE("TimeSlotString") {
        CHECK_EQ(TimeSlotString(morning), "Men in Black COMEDY (108) [starts at 8:10, ends by 9:58]");
        CHECK_EQ(TimeSlotString(daytime), "Back to the Future COMEDY (116) [starts at 14:15, ends by 16:11]");
        CHECK_EQ(TimeSlotString(evening), "Black Panther ACTION (134) [starts at 20:30, ends by 22:44]");
    }
    SUBCASE("scheduleAfter") {
        CHECK_EQ(scheduleAfter(morning, movie3), TimeSlot{movie3, {9, 58}});
        CHECK_EQ(scheduleAfter(daytime, movie2), TimeSlot{movie2, {16, 11}});
    }
    SUBCASE("timeOverlap") {
        CHECK_EQ(timeOverlap(morning, daytime), 0);
        CHECK_EQ(timeOverlap(daytime, afternoon_day), 1);
    }
}
