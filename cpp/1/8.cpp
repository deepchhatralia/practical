#include <iostream>
using namespace std;

class Time {
    public:
        int hr, min, sec;
        Time(int h, int m, int s){
            this->hr = h;
            this->min = m;
            this->sec = s;
        }
        void operator +(int num){
            this->sec += num;
            this->min += this->sec / 60;
            this->sec %= 60;
            
            this->hr += this->min / 60;
            this->hr %= 24;
            this->min %= 60;
            
            cout<<hr<<":"<<min<<":"<<sec;
        }
};

int main() {
    int seconds, h, m, s;
    
    cout<<"Hour : ";
    cin>>h;
    cout<<"Minutes : ";
    cin>>m;
    cout<<"Seconds : ";
    cin>>s;
    Time t(h,m,s);
    
    cout<<"Enter seconds to add : ";
    cin>>seconds;
    t + seconds;

    return 0;
}