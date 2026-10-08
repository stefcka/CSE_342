#ifndef TIME_SPAN
#define TIME_SPAN
#include <string>
#include <iostream>
class TimeSpan{
    public:
// constructor to rep.duration of time in hours, minutes, and seconds
TimeSpan(int hours, int min, int seconds);

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
//Operator overload - compound assignment operators, these modify current object, hence no const att the end
TimeSpan operator+=(const TimeSpan& other);
TimeSpan operator-=(const TimeSpan& other);
//Operator overload - Comparision Operators
bool operator==(const TimeSpan& other) const;
    bool operator!=(const TimeSpan& other) const;
    bool operator<(const TimeSpan& other) const;
    bool operator<=(const TimeSpan& other) const;
    bool operator>(const TimeSpan& other) const;
    bool operator>=(const TimeSpan& other) const;

std::cout << "Type in three values: " << 

    private:

    int hours;
    int minutes;
    int seconds;
    void set_time();
};
#endif