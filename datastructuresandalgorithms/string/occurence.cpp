#include <iostream>
#include <vector>
using namespace std;

string occurence(string s, string p)
{
    while(s.length()!=0 && s.find(p)<s.length())
    {
        s.erase(s.find(p), p.length());
    }
    return s;
}

int main()
{
    string s , p;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<"Enter a part: ";
    getline(cin,p);
    cout<<occurence(s,p)<<endl;

    return 0;
}