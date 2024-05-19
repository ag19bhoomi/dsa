#include <iostream>
using namespace std;

//using XOR
int findunique(int arr[],int size)
{
    int ans=0;

    for(int i=0;i<size;i++)
       ans = ans^arr[i];

    return ans;
}
int main()
{
    int arr[9]={5,5,4,2,1,7,4,2,1};
    cout<<"The unique NO. is: "<<findunique(arr,9)<<endl;

    return 0;
}