#include <iostream>
#include <vector>
using namespace std;

void movezeroes(int arr[],int n)
{
    //shift all non zero elements to left

    int nonzero=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[nonzero]);
            nonzero++;
        }
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[5]={1,0,4,0,5};
    movezeroes(arr,5);
    print(arr,5);

    return 0;
}