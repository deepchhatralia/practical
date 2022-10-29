#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float pi = 3.14;
    
    void *ptr = &a;
    ptr = &pi;
    
    cout<<*(float *)ptr;
    
    return 0;
}