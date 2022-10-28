#include <iostream>
using namespace std;

class Convert {
    public:
        void mtc(int meter){
            cout<<meter<<" meter is equal to "<<meter * 100<<" centimeter"<<endl;
        }
        void fti(int feet){
            cout<<feet<<" feet is equal to "<<feet * 12<<" inch"<<endl;
        }
        void itf(int inch){
            cout<<inch<<" inch is equal to "<<inch / 12<<" feet"<<endl;
        }
        void ctm(int cm){
            cout<<cm<<" centimeter is equal to "<<cm / 100<<" meter"<<endl;
        }
};

int main() {
    Convert obj;
    
    int choice;
    int meter, cm, feet, inch;
    
    cout<<"Choose "<<endl;
    cout<<"1) Meter to Centimeter and Feet to Inches"<<endl;
    cout<<"2) Centimeter to Meter and Inches to Feet"<<endl;
    cin>>choice;
    
    if(choice == 1){
        cout<<"Enter distance in meter : ";
        cin>>meter;
        cout<<"Enter distance in feet : ";
        cin>>feet;
        
        obj.mtc(meter);
        obj.fti(feet);
    }else{
        cout<<"Enter distance in centimeter : ";
        cin>>cm;
        cout<<"Enter distance in inches : ";
        cin>>inch;
        
        obj.ctm(cm);
        obj.itf(inch);
    }
    
    return 0;
}