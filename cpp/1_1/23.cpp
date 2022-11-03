#include <iostream>
using namespace std;

int main(){
    int rollNo[5] = {10,20,30,40,50};
    int *ptr = rollNo;
    
    cout<<"1st element in array : "<<*ptr;
}