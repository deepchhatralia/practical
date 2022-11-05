#include <iostream>
using namespace std;

class Date {
    private:
        int day, month, year;
    public:
        Date(int d, int m, int y){
            this->day = d;
            this->month = m;
            this->year = y;
            cout<<"Current date : "<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
        }
        friend void add(Date,int);
};

void add(Date obj, int num){
    obj.day += num;
    obj.month += obj.day / 30;
    obj.day %= 30;
    
    // obj.year += obj.day / 365;
    obj.year += obj.month / 12;
    obj.month %= 12;
    
    cout<<obj.day<<"/"<<obj.month<<"/"<<obj.year;
}

int main() {
    int days, d, m, y;
    
    // cout<<"Date (d) : ";
    // cin>>d;
    // cout<<"Month (mm) : ";
    // cin>>m;
    // cout<<"Year (yyyy) : ";
    // cin>>y;
    Date date(1,1,2002);
    
    cout<<"Enter days to add : ";
    cin>>days;
    add(date, days);

    return 0;
}