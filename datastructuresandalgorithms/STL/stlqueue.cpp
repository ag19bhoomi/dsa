#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Bhoomi");
    q.push("Agarwal");

    cout<<"Size: "<<q.size()<<endl;
    cout<<"First Element: "<<q.front()<<endl;
    q.pop();
    cout<<"First Element: "<<q.front()<<endl;

    cout<<"Size: "<<q.size()<<endl;

    return 0;

}