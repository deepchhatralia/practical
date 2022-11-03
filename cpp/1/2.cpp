#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int amt;
    
    cout<<"Enter net amount : ";
    cin>>amt;
    
    double x = round(amt*8.0/100);
    cout<<"Tax amount : "<<x<<endl;
    cout<<"Amount after tax : "<<amt + x;
        
    return 0;
}