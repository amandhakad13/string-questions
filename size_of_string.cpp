#include<iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter a String : ";
    int size = 0;
    getline(cin,s);
    while (s[size] != '\0')
    {
        size++;
    }
    cout<<"Size of String is : "<<size;
    
    return 0;
}