#include <iostream>
using namespace std;

inline int add(int x, int y){
    return x + y;
}

int main(){
    cout<<"Addition of 10 and 20 : "<<add(10,20);
}