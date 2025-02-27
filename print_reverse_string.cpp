#include<iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    int start = 0, end = s.size()-1;
    while(start < end) {
        int temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++,end--;
    }
    cout<<"Reverse of a String is : "<<s;
    return 0;
}