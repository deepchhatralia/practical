#include <iostream>
using namespace std;

string concat(string s1, string s3, string s2){
    return s1 + s3 + s2;
}

int main() {
    string s1, s2;
    cout<<"Enter string 1 : ";
    cin>>s1;
    cout<<"Enter string 2 : ";
    cin>>s2;
    cout<<"Concatinated string : ";
    cout<<concat(s1," ",s2);
    
    return 0;
}