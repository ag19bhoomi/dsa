#include <iostream>
using namespace std;
int findduplicate(int arr[],int size)
{
    int ans=0;
    
    //XOR ing all elements
    for (int i=0;i<size;i++)
    {
        ans = ans^arr[i];
    }

     //XOR [1,n-1]
    for (int i=1;i<size;i++)
    {
        ans = ans^i;
    }
    return ans;
}
int main()
{
    int arr[6]={5,5,4,1,2,3,};
    cout<<"The duplicate no. is: "<<findduplicate(arr,6)<<endl;

     return 0;
}