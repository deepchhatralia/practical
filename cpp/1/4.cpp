#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int pos = 0;
    
    cout<<"Enter 5 numbers : ";
    for(int i = 0 ; i < 5 ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < 5 ; i++){
        if(arr[i] >= 0) pos++;
    }
    
    cout<<"You entered "<<pos<<" positive numbers and "<<(sizeof(arr)/sizeof(arr[0]))-pos<<" negative numbers";
    
    return 0;
}