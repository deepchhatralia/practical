#include <iostream>
using namespace std;

int add(int a, int b, int c = 0, int d = 0, int e = 0){
    return a + b + c + d + e;
}

int main() {
    cout<<"Addition using default arguments : "<<add(10,20,30);
    
    return 0;
}