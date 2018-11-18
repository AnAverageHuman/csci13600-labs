#include <iostream>

#include "main.hpp"

#define GRN(x) "\x1B[32m" x "\x1B[0m"

int main() {
  std::cout << GRN("Task A");
  std::cout << std::endl;
  std::cout << "First time:  10 30";
  std::cout << std::endl;
  std::cout << "Second time: 13 40";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "These moments of time are ";
  std::cout << minutesSinceMidnight(Time{10, 30});
  std::cout << " and ";
  std::cout << minutesSinceMidnight(Time{13, 40});
  std::cout << " minutes after midnight.";
  std::cout << std::endl;
  std::cout << "The interval between them is ";
  std::cout << minutesSinceMidnight(Time{13, 40}) - minutesSinceMidnight(Time{10, 30});
  std::cout << " minutes.";
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task B");
  std::cout << std::endl;
  std::cout << "addMinutes({8, 10}, 75)";
  std::cout << std::endl;
  Time a = addMinutes({8, 10}, 75);
  std::cout << a.h;
  std::cout << ":";
  std::cout << a.m;
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task C");
  std::cout << std::endl;
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};
  std::cout << printTimeSlot({movie1, {9, 15}});
  std::cout << std::endl;
  std::cout << printTimeSlot({movie2, {12, 15}});
  std::cout << std::endl;
  std::cout << printTimeSlot({movie2, {16, 45}});
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task D");
  TimeSlot morning = {movie1, {9, 15}};
  std::cout << std::endl;
  std::cout << printTimeSlot(scheduleAfter(morning, movie1));
  std::cout << std::endl;
  std::cout << printTimeSlot(scheduleAfter(scheduleAfter(morning, movie1), movie1));
  std::cout << std::endl;
  std::cout << printTimeSlot(scheduleAfter(scheduleAfter(scheduleAfter(morning, movie1), movie1), movie1));
  std::cout << std::endl;
  std::cout << printTimeSlot(scheduleAfter(scheduleAfter(scheduleAfter(scheduleAfter(morning, movie1), movie1), movie1), movie1));
  std::cout << std::endl;
  std::cout << printTimeSlot(scheduleAfter(scheduleAfter(scheduleAfter(scheduleAfter(scheduleAfter(morning, movie1), movie1), movie1), movie1), movie1));
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task E");
  std::cout << std::endl;
  std::cout << "{\"Back to the Future\", COMEDY, 116}";
  std::cout << std::endl;
  std::cout << "timeOverlap(morning, scheduleAfter(morning, movie1))";
  std::cout << std::endl;
  std::cout << timeOverlap(morning, scheduleAfter(morning, movie1));
  std::cout << std::endl;
  std::cout << "timeOverlap(morning, TimeSlot{movie1, addMinutes(morning.startTime, 1)})";
  std::cout << std::endl;
  std::cout << timeOverlap(morning, TimeSlot{movie1, addMinutes(morning.startTime, 1)});
  std::cout << std::endl;
  return 0;
}
