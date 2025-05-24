#include <iostream>
#include <iomanip>
#include "MilTime.h"

using namespace std;

int main() {
    
    int milHours, milSeconds;

    cout << "Enter military time (HHMM, 0000 - 2359): ";
    cin >> milHours;

    cout << "Enter seconds (0 - 59): ";
    cin >> milSeconds;

    MilTime mt(milHours, milSeconds);

    if (milHours >= 0 && milHours <= 2359 && milSeconds >= 0 && milSeconds <= 59 && milHours % 100 < 60) {
        cout << fixed << setfill('0');

        cout << "\nMilitary Time: "
             << setw(2) << milHours / 100 << ":"
             << setw(2) << milHours % 100 << ":"
             << setw(2) << milSeconds << endl;

        cout << "Standard Time: "
             << setw(2) << mt.getStandHr() << ":"
             << setw(2) << mt.getMin() << ":"
             << setw(2) << mt.getSec()
             << (milHours / 100 >= 12 ? " PM" : " AM") << endl;
             
    }

    return 0;
}
