#include <iostream>
using namespace std;

class Student {
    private:
        string name;
    public:
        void setData(string name){
            this->name = name;
        }
    friend void friendFunction(Student);
};

void friendFunction(Student s){
    cout<<s.name;
}

int main() {
    Student s;
    string name;
    
    cout<<"Enter your name : ";
    cin>>name;
    
    s.setData(name);

    friendFunction(s);

    return 0;
}