#include <iostream>
using namespace std;

class University {
    private:
        string name = "University";
};

class Department : public University {
    public:
        int departmentId;
        string name;
};

class Student : public Department {
    public:
        int studentId;
        Student(int id){
            this->studentId = id;
        }
};

class Teacher : public Department {
    public:
        int teacherId;
};

int main(){
    Student s1(5);
    s1.name = "Deep";
    cout<<s1.name;
}