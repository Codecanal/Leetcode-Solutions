#include <iostream>
#include <string>
using namespace std;
int main()
{
    long x = -231;
    string s = to_string(x);
    string b;
    if(x<0)
    {
        b = '-';
        for(int i = s.length()-1;i>0;i--)
        {
        b = b+s[i];
        }
    }
    else{
    for(int i = s.length()-1;i>=0;i--)
    {
        b = b+s[i];
    }
    }
    string p  = to_string(INT_MAX);
    cout<<p.length();
}