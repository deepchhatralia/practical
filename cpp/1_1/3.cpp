#include <iostream>
using namespace std;

int factorial(int x){
    if(x == 1) return 1;
    
    return x * factorial(x-1);
}

int main() {
    int x;
    
    cout<<"Enter number to calculate its factorial : ";
    cin>>x;
    
    cout<<"Factorial of "<<x<<" : "<<factorial(x);

    return 0;
}