#include <iostream>
using namespace std;

class Student {
    public:
        int rollNo;
        Student(){}
        Student(int n){
            this->rollNo = n;
        }
        Student operator ++(){
            Student temp;
            temp.rollNo = ++this->rollNo;
            return temp;
        }
};

int main() {
    Student s1(105), s2;
    
    s2 = ++s1;
    cout<<s2.rollNo;

    return 0;
}