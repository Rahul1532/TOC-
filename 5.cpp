//Design a program for creating a machine which accepts string having equal no. if 1’s and 0’s
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int count_0=0;
    int count_1=0;
    bool torf=true;
    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='0')
        {count_0++;}
        else if(s[i]=='1')
        {count_1++;}
        else
        torf=false;
    }

    if(torf)
    {   
        if(count_0==count_1)
        cout<<"Accepted"<<endl;
        else
        cout<<"Rejected"<<endl;
    }
    else{
        cout<<"Incorrect Input"<<endl;
    }

    return 0;
}
