//Design a program for accepting decimal number divisible by 2.
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

    if(torf)
    {   
        int dec_value=0;
        int power=1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1'){
               dec_value=dec_value+power;
            }
            power=power*2;
        }
        if(dec_value%2==0)
        cout<<"Accepted"<<endl;
        else
        cout<<"Rejected"<<endl;
    }
    else{
        cout<<"Incorrect Input"<<endl;
    }

    return 0;
}
