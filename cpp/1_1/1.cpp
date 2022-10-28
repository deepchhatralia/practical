#include <iostream>
using namespace std;

int add(int x, int y){
    return x + y;
}

int main() {
    int x, y;
    
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    
    cout<<"Addition of "<<x<<" and "<<y<<" : "<<add(x,y);

    return 0;
}