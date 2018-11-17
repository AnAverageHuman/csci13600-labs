#ifndef MAIN_HPP
#define MAIN_HPP

class Time {
  public:
    int h;
    int m;
};

bool operator==(const Time a, const Time b);

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);

#endif // MAIN_HPP

