#include <iostream>
using namespace std;


 int romanToInt(string s) {
       
        char c;
        int i;
        int val;
        int sum = 0;
        for(i = 0; i<s.length(); i++)
        {
            c = s[i];
        switch(c)
        {
            case('I'):
            if(s[i+1]=='X')
            {
                val = 9;
                i++;
            }
            else if(s[i+1]=='V')
            {

                val = 4;
                i++;
            }
            else
            {

                val = 1;
            }
            break;
            
            case('V'):
            val = 5;
            break;

            case('X'):
            if(s[i+1]=='L')
            {
                val = 40;
                i++;
            }
            else if(s[i+1]=='C')
            {
                val = 90;
                i++;
            }
            else
            {
                val = 10;
            }
            break;

            case('L'):
            val = 50;
            break;

            case('C'):
            if(s[i+1]=='D')
            {
                val = 400;
                i++;
            }
            else if(s[i+1]=='M')
            {
                val = 900;
                i++;
            }
            else
            {
                val = 100;
            }
            break;

            case('D'):
            val = 500;
            break;

            case('M'):
            val = 1000;
            break;
        }
            sum = sum+val;
        }
        return sum;
    }
int main()
{
    string a = "DCXXI";
    int ans = romanToInt(a);
    cout<<ans;

}