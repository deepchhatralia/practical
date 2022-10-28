#include <iostream>
using namespace std;

class Taxi {
    public:
        int distance, taxiNo;
        string name;
        
        int calculate(){
            if(this->distance == 0) return 0;
            
            if(this->distance <= 5) return 50;
            
            if(this->distance <= 15) return 50 + ((this->distance - 5) * 12);
            
            if(this->distance <= 30) return 50 + (10 * 12) + ((this->distance - 15) * 8);
            
            return 50 + (10 * 12) + (15 * 8) + ((this->distance - 30) * 5);
        }
};

int main() {
    Taxi t;
    
    cout<<"Enter taxi number : ";
    cin>>t.taxiNo;
    cout<<"Enter your name : ";
    cin>>t.name;
    cout<<"Enter total distance travelled : ";
    cin>>t.distance;
    
    cout<<"Total fare : "<<t.calculate();

    return 0;
}