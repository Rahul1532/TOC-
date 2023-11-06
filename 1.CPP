//Design a Program for creating machine that accepts three consecutive one.
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter The string :";
    cin>>s;
    int count=0;
    bool torf=true;
    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='0' || s[i]=='1')
        {continue;}
        else
        {torf=false;}
    }

    string s2;
    string comp_str = "111";

    if(torf)
    {
        if(s.size()>=3)
        {    for (int i = 0; i <= s.size()-3 ; i++)
                {
                      s2=s.substr(i,3);
                      if(s2==comp_str)
                      { count++; }
                }
        }
    }
    else
    {cout<<"Invalid Input"<<endl;}
    if(count>0)
    cout<<"Accepted"<<endl;
    else
    cout<<"Rejected"<<endl;
    return 0;
}
