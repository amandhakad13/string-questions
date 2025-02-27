#include<iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    int start = 0, end = s.size()-1;
    while(start < end) {
        if(s[start] != s[end]){
            cout<<"String is not Palindrome"<<endl;
            return 0;
        }
        start++,end--;
    }
    cout<<"String is Palindrome";
    return 0;
}