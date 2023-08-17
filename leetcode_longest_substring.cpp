#include <iostream>
#include <string>
#include <map>
bool checkIfInString(string b,char c)
    {
        bool flag;
        for(int i = 0; i<b.length(); b++)
        {
            if(c==b[i])
            {
            flag = true;
            break;
            }
            else
            flag = false;
        }
        return flag;
    }
    int lenofLongSubs(string s)
    {
        string b;
        
        int arr[10];
        for(int i = 0; i<s.length();i++)
        {
            int len=0;
            b = b + s[i];
            len++;
            if(checkIfInString(b,s[i+1]))
            {
                arr[i]=len;
            }
            


        }
    }
using namespace std;
int main()
{
   
}