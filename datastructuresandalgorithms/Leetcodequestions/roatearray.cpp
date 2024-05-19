#include <iostream>
#include <vector>
using namespace std;

void rotate(int arr[],int n,int k)
{
    int temp[n];

    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n] = arr[i];
    }
    
    for(int i=0;i<n;i++)
    arr[i]=temp[i];
   
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[5]={1,5,2,4,6};
    rotate(arr,5,3);
    print(arr,5);
    return 0;

}