#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int>d;

    d.push_back(2);
    d.push_front(5);

    for (int i:d)
    cout<<i<<" ";
    cout<<endl;

    d.pop_back();
    for (int i:d)
    cout<<i<<" ";
    cout<<endl;

    /* d.pop_front();
    for (int i:d)
    cout<<i<<" ";
    cout<<endl;
    */

   cout<<"Before erase: "<<d.size()<<endl;
   d.erase(d.begin(),d.begin()+1);    //use to delete ements in a given range
   cout<<"After erase:"<<d.size()<<endl;
    for (int i:d)
    cout<<i<<endl;

return 0;

}