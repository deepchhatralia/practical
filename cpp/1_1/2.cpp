#include <iostream>
using namespace std;

inline int add(int x, int y){
    return x + y;
}

int main(){
    int x, y;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    cout<<"Addition of 10 and 20 : "<<add(x,y);
}