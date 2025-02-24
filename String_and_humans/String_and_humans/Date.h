#pragma once
#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    void display() const {
        std::cout << day << "/" << month << "/" << year;
    }
};

