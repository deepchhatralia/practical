#include <iostream>
using namespace std;

int main() {
    char ch;
    
    cout<<"Enter a character : ";
    cin>>ch;
    
    ch = tolower(ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u')
        cout<<"\nIt is a vowel";
    else
        cout<<"\nIt is a constant";
        
    return 0;
}