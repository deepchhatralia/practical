#include <iostream>
using namespace std;

class Student {
    public:
        int rollNo, age;
        string name;
        
        class Subject {
            public:
                int cpp = 30, java = 40, python = 10;
                
                void update(){
                    cout<<"C++ : "<<this->cpp<<endl;
                    cout<<"Java : "<<this->java<<endl;
                    cout<<"Python : "<<this->python<<endl;
                    cout<<"C++ : ";
                    cin>>this->cpp;
                    cout<<"Java : ";
                    cin>>this->java;
                    cout<<"Python : ";
                    cin>>this->python;
                }
        };
};

int main() {
    int rollNo;
    bool flag = false;
    Student s1[2];
    Student :: Subject sub[2];
    
    for(int i = 0 ; i < 2 ; i++){
        cout<<"Student "<<i+1<<endl;
        cout<<"Name : ";
        cin>>s1[i].name;
        cout<<"Roll Number : ";
        cin>>s1[i].rollNo;
        cout<<"Age : ";
        cin>>s1[i].age;
        cout<<"C++ marks : ";
        cin>>sub[i].cpp;
        cout<<"Java marks : ";
        cin>>sub[i].java;
        cout<<"Python marks : ";
        cin>>sub[i].python;
    }
    
    cout<<"Enter roll number whose marks needs to be updated : ";
    cin>>rollNo;
    
    for(int i = 0 ; i < 2 ; i++){
        if(s1[i].rollNo == rollNo){
            sub[i].update();
            flag = true;
            break;
        }
    }
    
    if(!flag)
        cout<<"Roll Number not found";
    else{
        cout<<"Updated marks : "<<endl;
        for(int i = 0 ; i < 2 ; i++){
            cout<<"Name : "<<s1[i].name<<" Roll Number : "<<s1[i].rollNo<<endl;
            cout<<"C++ : "<<sub[i].cpp<<endl;
            cout<<"Java : "<<sub[i].java<<endl;
            cout<<"Python : "<<sub[i].python<<endl;
        }
    }
    

    return 0;
}