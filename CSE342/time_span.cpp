#include <iostream>
#include "time_span.h"
#include <cmath>
using namespace std;

void TimeSpan::set_time(int hours, int minutes, int seconds) {
    hours_ = hours;
    minutes_ = minutes;
    seconds_ = seconds;
  int total_seconds = (hours_ * 3600) + (minutes_ * 60) + seconds_;
    hours_ = total_seconds / 3600;
    minutes_ = (total_seconds % 3600) / 60;
    seconds_ = total_seconds % 60;
}

TimeSpan::TimeSpan(int hours, int min, int seconds) {
    set_time(hours, min, seconds);

}


int TimeSpan::hours() const {
    return hours_;
}

int TimeSpan::minutes() const {
    return minutes_;
}

int TimeSpan::seconds() const {
    return seconds_;
}
TimeSpan::TimeSpan() {
    set_time(0, 0, 0); // Defaults to 0 hours, minutes, and seconds
}
TimeSpan::TimeSpan(double minutes, double seconds) {

 
    set_time(0, std::round(minutes), std::round(seconds));
}
TimeSpan::TimeSpan(double seconds) {

    set_time(0, 0, std::round(seconds));

}
// Does this object total seconds equal the other object total seconds?
bool TimeSpan::operator==(const TimeSpan& other) const {
    return this->total_seconds() == other.total_seconds();
}
// Does this object total seconds less than the other object total seconds?
bool TimeSpan::operator<(const TimeSpan& other) const {
    return this->total_seconds() < other.total_seconds();
}
// Does this object total seconds greater than the other object total seconds?
bool TimeSpan::operator>(const TimeSpan& other) const {
    return this->total_seconds() > other.total_seconds();
}
// Does this object total seconds not equal to the other object total seconds?
bool TimeSpan::operator!=(const TimeSpan& other) const {
    return this->total_seconds() != other.total_seconds();
}
// Does this object total seconds greater than or equal to the other object total seconds?
bool TimeSpan::operator>=(const TimeSpan& other) const {
    return this->total_seconds() >= other.total_seconds();
}
// Does this object total seconds less than or equal to the other object total seconds?
bool TimeSpan::operator<=(const TimeSpan& other) const {
    return this->total_seconds() <= other.total_seconds();
}
// Negates the current object, returning a new TimeSpan object with negated total seconds
TimeSpan TimeSpan::operator+(const TimeSpan& other)const{
    return TimeSpan(this->total_seconds() + other.total_seconds());
}
TimeSpan TimeSpan::operator-(const TimeSpan& other)const{
    return TimeSpan(this->total_seconds() - other.total_seconds());
}
TimeSpan TimeSpan::operator+=(const TimeSpan& other){
    *this = *this + other;
    return *this;
}
TimeSpan TimeSpan::operator-=(const TimeSpan& other){
    *this = *this - other;
    return *this;
}





