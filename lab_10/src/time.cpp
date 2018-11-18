#include "main.hpp"

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
