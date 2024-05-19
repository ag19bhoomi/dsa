#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>s;
   
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(9);

    for(auto i:s)
    cout<<i<<endl;
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
   
    for(auto i:s)
    cout<<i<<endl;
    cout<<endl;

    cout<<"5 present or not: "<<s.count(5);
    cout<<endl;

    set<int>::iterator itr = s.find(5);
    cout<<"Value present at: "<<*it<<endl;

    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

}