#include <iostream>
#include <map>
using namespace std;

int main()
{ 
    map<int,string> m;
    m[18]="Bhoomi";
    m[23]="Krishna";
    m[48]="Kirti";

    m.insert({19,"pratyush"});

    for(auto i:m)
    {
        cout<<"Age:"<<i.first<<" "<<"Name:"<<i.second<<endl;
    }

    cout<<"finding 13: "<<m.count(13)<<endl;

    m.erase(18);
    cout<<"after erase"<<endl;
    for(auto i:m)
    {
        cout<<"Age:"<<i.first<<" "<<"Name:"<<i.second<<endl;
    }
    cout<<endl;
   
   auto it = m.find(23);    //iterator

   for(auto i=it;i!=m.end();i++){
    cout<<"Age:"<<(*i).first<<" "<<"Name:"<<(*i).second<<endl;
   }


    return 0;

}