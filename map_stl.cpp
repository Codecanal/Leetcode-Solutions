#include <iostream>
#include <map>
#include <string> 
#include <unordered_map>
using namespace std;
int main()
{


    map <string,int> marks;
    

    //creation
    unordered_map<string,int> m;
    pair<string, int> p = make_pair("babbar",3);
    m.insert(p);

    m.insert(p);
    


    pair<string,int>pair2("love",2);
    m.insert(pair2);

    m["mera"] = 1;

    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;


}