#include <iostream>
using namespace std;

int main() {
    int amt;
    
    cout<<"Enter net amount : ";
    cin>>amt;
    
    cout<<"Tax amount : "<<amt*8/100<<endl;
    cout<<"Amount after tax : "<<amt + (amt*8/100);
        
    return 0;
}