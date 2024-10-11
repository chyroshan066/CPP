#include<iostream>
using namespace std;

class Time{
    private:
        int hours, minutes, seconds;
    public:
        Time(){
            hours = 0;
            minutes  = 0;
            seconds = 0;
        }
        Time(int hr, int min, int sec){
            hours = hr;
            minutes  = min;
            seconds = sec;
        }
        void displayTime(){
            cout<< hours<< ":"<< minutes<< ":"<< seconds;
        }
        Time addTime(Time o1){
            Time temp;
            temp.seconds = (seconds + o1.seconds) % 60;
            temp.minutes = (minutes + o1.minutes + ((seconds + o1.seconds) / 60)) % 60;
            temp.hours  = hours + o1.hours + ((minutes + o1.minutes) / 60);
            return temp;
        }
};

int main(){
    Time t1, t2, t3;
    int hr, min, sec;
    cout<< "Enter time in hour, minute, second format: ";
    cin>> hr>> min>> sec;
    t1 = Time(hr,min,sec);
    cout<< "Enter time in hour, minute, second format: ";
    cin>> hr>> min>> sec;
    t2 = Time(hr,min,sec); 
    t1.displayTime();
    cout<< " + ";
    t2.displayTime();
    cout<< " = ";
    t3 = t1.addTime(t2);
    t3.displayTime();
    return 0;
}