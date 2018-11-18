#include <sstream>
#include <iostream>

#include "main.hpp"

#define SPACE ' '
#define LPARE " ("
#define RPARE ") "
#define LBRAC '['
#define RBRAC ']'
#define COLON ':'
#define COMMA ','

int minutesSinceMidnight(Time time) {
  return time.h * 60 + time.m;
}

int minutesUntil(Time earlier, Time later) {
  return minutesSinceMidnight(later) - minutesSinceMidnight(earlier);
}

bool operator==(const Time a, const Time b) {
  return a.h == b.h && a.m == b.m;
}

Time addMinutes(Time time0, int min) {
  int m = time0.m + min;
  return Time{time0.h + m / 60, m % 60};
}

std::string printTimeSlot(TimeSlot ts) {
  std::stringstream ss;
  ss << ts.movie.title;
  ss << SPACE;
  ss << genres[ts.movie.genre];
  ss << LPARE;
  ss << ts.movie.duration;
  ss << " min";
  ss << RPARE;
  ss << LBRAC;
  ss << "starts at ";
  ss << ts.startTime.h;
  ss << COLON;
  ss.fill('0');
  ss.width(2);
  ss << ts.startTime.m;
  ss << COMMA;
  ss << " ends by ";
  Time t = addMinutes(ts.startTime, ts.movie.duration);
  ss << t.h;
  ss << COLON;
  ss.fill('0');
  ss.width(2);
  ss << t.m;
  ss << RBRAC;
  return ss.str();
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
  return TimeSlot{nextMovie, addMinutes(ts.startTime, ts.movie.duration)};
}
