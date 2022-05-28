#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <fstream>
using namespace std;
class Date
{
public:
    Date(int day = 1, int month = 1, int year = 1900);

    virtual ~Date();
    Date now();
    int currentDaysInYear();
    static bool isLeap(int year);
    static int daysInMonth(int month, int year);
    static int daysInYear(int year);
    static bool isValidDate(Date dt);
    static bool isValidDate(int day, int month, int year);
    static Date defaultDate;

    bool operator<(const Date& dt);
    bool operator>(const Date& dt);
    bool operator==(const Date& dt);
    bool operator!=(const Date& dt);
    int operator-(const Date& dt);
    friend ostream& operator<<(ostream& os, const Date& dt);
    friend istream& operator>>(istream& is, Date& dt);
    friend ofstream& operator<<(ofstream& fo, const Date& dt);
    friend ifstream& operator>>(ifstream& fi, Date& dt);

private:
    int day, month, year;

};

#endif // DATE_H

