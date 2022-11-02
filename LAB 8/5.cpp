// WAP to add two objects of time class. Overload the operator =" to compare two objects
// and display whether they are equal or not. Overload the assignment operator.

#include <iostream>
using namespace std;

class Time
{
    public: 
        int hours, minutes, seconds;
        Time(int hours, int minutes, int seconds)
        {
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        }
        Time operator+(Time t)
        {
            Time temp(0, 0, 0);
            temp.hours = hours + t.hours;
            temp.minutes = minutes + t.minutes;
            temp.seconds = seconds + t.seconds;
            if (temp.seconds >= 60)
            {
                temp.seconds -= 60;
                temp.minutes++;
            }
            if (temp.minutes >= 60)
            {
                temp.minutes -= 60;
                temp.hours++;
            }
            return temp;
        }
        void operator=(Time t)
        {
            if (hours == t.hours && minutes == t.minutes && seconds == t.seconds)
            {
                cout << "Both times are equal." << endl;
            }
            else
            {
                cout << "Both times are not equal." << endl;
            }
        }
};

int main()
{
    Time t1(1, 2, 3), t2(1, 2, 3), t3(0, 0, 0);
    t3 = t1 + t2;
    cout << "Time 1: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds << endl;
    cout << "Time 2: " << t2.hours << ":" << t2.minutes << ":" << t2.seconds << endl;
    cout << "Time 3: " << t3.hours << ":" << t3.minutes << ":" << t3.seconds << endl;
    t1 = t2;
    return 0;
}