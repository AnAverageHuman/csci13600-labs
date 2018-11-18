#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>
#include <string_view>

class Time {
  public:
    int h;
    int m;
};

#define MKENUM(V) V,
#define MKSTRING(V) #V,

#define GENRE(DOO) \
  DOO(ACTION)   \
  DOO(COMEDY)   \
  DOO(DRAMA)    \
  DOO(ROMANCE)  \
  DOO(THRILLER)

enum Genre {
  GENRE(MKENUM)
};

constexpr std::string_view genres[5] = {
  GENRE(MKSTRING)
};

class Movie {
  public:
    std::string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot {
  public:
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

bool operator==(const Time a, const Time b);
bool operator<(const Time a, const Time b);

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
std::string printTimeSlot(TimeSlot ts);
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
bool timeOverlap(TimeSlot ts1, TimeSlot ts2);

#endif // MAIN_HPP

