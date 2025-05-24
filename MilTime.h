#ifndef MILTIME_H
#define MILTIME_H

#include "Time.h"
#include <iostream>
#include <iomanip>

class MilTime : public Time 
{
    
private:
    int milHours;
    int milSeconds;

public:
    MilTime() : milHours(0), milSeconds(0) {}

    MilTime(int mh, int ms) 
    {
        
        setTime(mh, ms);
        
    }

    void setTime(int mh, int ms) 
    {
        
        if (mh < 0 || mh > 2359 || ms < 0 || ms > 59 || mh % 100 >= 60) 
        {
            std::cerr << "Invalid military time or seconds.\n";
            milHours = 0;
            milSeconds = 0;
            hour = 0;
            min = 0;
            sec = 0;
            return;
        }

        milHours = mh;
        milSeconds = ms;

        int standardHour = mh / 100;
        int minute = mh % 100;

        hour = (standardHour == 0 || standardHour == 12) ? 12 : standardHour % 12;
        min = minute;
        sec = ms;
    }

    int getHour() const 
    {
        return milHours;
    }

    int getStandHr() const 
    {
        return hour;
    }

    int getMin() const 
    {
        return min;
    }

    int getSec() const 
    {
        return sec;
    }
    
};

#endif
