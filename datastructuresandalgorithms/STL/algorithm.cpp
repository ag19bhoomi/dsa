#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"Finding 4: "<<binary_search(v.begin(),v.end(),4)<<endl;        //to check whether element is present

    cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=5;
    int b=6;

    cout<<"Max: "<<max(a,b);
    cout<<" Min: "<<min(a,b)<<endl;

    swap(a,b);                          //to swap two values
    cout<<"a: "<<a<<endl;
 
    string s= "Bhoomi";
    reverse(s.begin(),s.end());                  //reverse a string
    cout<<"String: "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());      //reverse an array

    cout<<"After rotate"<<endl;
    for(int i:v)
    cout<<i<<" ";
    cout<<endl;

    sort(v.begin(),v.end());                 //to sort an array
    for(int i:v)
    cout<<i<<" ";
    cout<<endl;

    return 0;
}