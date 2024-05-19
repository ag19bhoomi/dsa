#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string>s;

    s.push("Bhoomi");
    s.push("Agarwal");
    s.push("Pratyush");

    cout<<"TOP element: "<<s.top()<<endl;
    s.pop();
    cout<<"TOP element: "<<s.top()<<endl;

    cout<<"size of stack: "<<s.size()<<endl;
    cout<<"Empty or not : "<<s.empty()<<endl;

    return 0;

}