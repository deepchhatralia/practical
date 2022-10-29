#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        Student(string n){
            this->name = n;
        }
        
        string getName(){
            return this->name;
        }
};

int main() {
    Student s1("hello"), s2("world");
    
    cout<<s1.getName()<<endl;
    cout<<s2.getName();
    
    return 0;
}