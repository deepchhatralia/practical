#include <iostream>
using namespace std;

class Person {
    public:
        int age;
        string name;
        void setData(){
            cout<<"Name : ";
            cin>>this->name;
            cout<<"Age : ";
            cin>>this->age;
        }
        
        void display(){
            cout<<"Name : "<<this->name<<endl;
            cout<<"Age : "<<this->age;
        }
};

void findMaxAge(Person p[], int length){
    int index = -1, max = -1;
    
    for(int i = 0 ; i < length ; i++){
        if(p[i].age > max){
            max = p[i].age;
            index = i;
        }
    }
    cout<<"Age of "<<p[index].name<<" is greater than all";
}

int main() {
    int length = 4;
    Person p[length];
    
    cout<<"Enter names and age of 4 people : "<<endl;
    for(int i = 0 ; i < length ; i++){
        p[i].setData();
    }
    findMaxAge(p,length);
    
    return 0;
}