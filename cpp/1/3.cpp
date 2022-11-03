#include <iostream>
using namespace std;

int main() {
    int mb;
    
    cout<<"Enter file size (in mb) : ";
    cin>>mb;
    
    cout<<"It will take "<<(mb*1024*1000)/960<<" seconds to transmit the file.";
        
    return 0;
}