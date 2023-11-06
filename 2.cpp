//Design a program for creating machine that accepts the string always ending with 101.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    bool torf=true;
    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='0' || s[i]=='1')
        {continue;}
        else
        {torf=false;}
    }

    string comp_str = "101";
    if(torf)
    {
    if(s.size()>=3)
    {
        string s1 = s.substr(s.size()-3,3);
        if(s1==comp_str)
        cout<<"Accepted"<<endl;
        else
        cout<<"Rejectd"<<endl;
    }
    else
    {cout<<"Rejected"<<endl;}
    }
    else
        {cout<<"Invalid Input"<<endl;}
        return 0;
    }
