#include <iostream>
using namespace std;

float calculate(float p = 0, float i = 0, int y = 0){
    return (p * i * y) / 100;
}

int main() {
    float principal, interest;
    int yr;
    
    cout<<"Principal amount : ";
    cin>>principal;
    cout<<"Interest rate : ";
    cin>>interest;
    cout<<"Time (in years) : ";
    cin>>yr;
    
    cout<<"Simple interest : "<<calculate(principal, interest, yr);

    return 0;
}