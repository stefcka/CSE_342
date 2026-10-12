#ifndef TIME_SPAN
#define TIME_SPAN
#include <string>
#include <iostream>
using namespace std;
class TimeSpan{
    public:
// constructor to represent duration of time in hours, minutes, and seconds
TimeSpan(int hours, int min, int seconds);
TimeSpan();

int hours()const;
int minutes()const;
int seconds()const;

void set_time(int hours, int minutes, int seconds);

//Overload construcotrs for each arguement type
TimeSpan(double seconds);
TimeSpan(double minutes, double seconds);

//Operator overload - math operators
TimeSpan operator+(const TimeSpan& other)const;
TimeSpan operator-(const TimeSpan& other)const;
TimeSpan operator-() const;
//Operator overload - compound assignment operators, these modify current object, hence no const at the end
TimeSpan operator+=(const TimeSpan& other);
TimeSpan operator-=(const TimeSpan& other);
//Operator overload - Comparision Operators
    bool operator==(const TimeSpan& other) const;
    bool operator!=(const TimeSpan& other) const;
    bool operator<(const TimeSpan& other) const;
    bool operator<=(const TimeSpan& other) const;
    bool operator>(const TimeSpan& other) const;
    bool operator>=(const TimeSpan& other) const;



    private:
    // Helper private method to calculate total seconds
   int total_seconds() const {
    return (hours_ * 3600LL) + (minutes_ * 60LL) + seconds_;
}
    int hours_;
    int minutes_;
    int seconds_;
};
#endif